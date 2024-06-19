import React, { useState, useEffect, useRef } from 'react';
import { Pressable } from 'react-native-web';

const GetPost = ({ x, y, zoom, maxItr, updateParameters }) => {
  const [data, setData] = useState([]);
  const [loading, setLoading] = useState(false);
  const [error, setError] = useState(null);
  const [successMessage, setSuccessMessage] = useState(null);
  const [parameterIds, setParameterIds] = useState([]);
  const timeoutRef = useRef(null); // Ref to store the timeout ID

  const refreshDelay = 20; // 0.02 seconds
  const messageDuration = 3000; // 3 seconds

  useEffect(() => {
    fetchData();
  }, []);

  const fetchData = () => {
    setLoading(true);
    setError(null);

    fetch(`http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080/parameter_id`)
      .then(response => {
        if (!response.ok) {
          throw new Error('Network response was not ok');
        }
        return response.json();
      })
      .then(data => {
        if (data && Array.isArray(data.parameter_id)) {
          setParameterIds(data.parameter_id);
          const fetchPromises = data.parameter_id.map(id => {
            return fetch(`http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080/table/${id}`)
              .then(response => {
                if (!response.ok) {
                  throw new Error(`Failed to fetch parameter ${id}`);
                }
                return response.json();
              });
          });
          return Promise.all(fetchPromises);
        } else {
          throw new Error('No parameter IDs found');
        }
      })
      .then(responses => {
        setData(responses);
        setLoading(false);
      })
      .catch(error => {
        setError(error);
        setLoading(false);
      });
  };

  const postData = () => {
    setLoading(true);
    setError(null);

    fetch(`http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080/parameters?x_offset=${x}&y_offset=${y}&zoom=${zoom}&max_iterations=${maxItr}`, {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json'
      },
    })
      .then(response => {
        if (!response.ok) {
          throw new Error('Network response was not ok');
        }
        return response.json();
      })
      .then(data => {
        setLoading(false);
        setSuccessMessage(`Successfully stored at index ${data.parameter_id}`);
        clearHideMessageTimeout();
        hideMessageAfterDelay();
        console.log('Post response data:', data);
      })
      .catch(error => {
        setError(error);
        setLoading(false);
        clearHideMessageTimeout();
        hideMessageAfterDelay();
      });

    setTimeout(fetchData, refreshDelay);
  };

  const sendToFPGA = (id) => {
    setLoading(true);
    setError(null);
    console.log("fanna");
    console.log((id));

    fetch(`http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080/parameter_id`, 
    { method: 'POST',
      headers: {'Content-Type': 'application/json'},
      body: JSON.stringify({ parameter_id: id})

    })
      .then(response => {
        if (!response.ok) {
          throw new Error('Network response was not ok');
        }
      })
      .then(() => {
        setLoading(false);
        setSuccessMessage(`Parameter ${id} selected successfully`);
        clearHideMessageTimeout();
        hideMessageAfterDelay();
      })
      .catch(error => {
        setError(error);
        setLoading(false);
        clearHideMessageTimeout();
        hideMessageAfterDelay();
      });

    setTimeout(fetchData, refreshDelay);
  };

  const deleteAll = () => {
    setLoading(true);
    setError(null);

    fetch(`http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080/parameters`, { method: 'DELETE' })
      .then(response => {
        if (!response.ok) {
          throw new Error('Network response was not ok');
        }
      })
      .then(() => {
        setLoading(false);
        setSuccessMessage('All parameters deleted successfully');
        clearHideMessageTimeout();
        hideMessageAfterDelay();
      })
      .catch(error => {
        setError(error);
        setLoading(false);
        clearHideMessageTimeout();
        hideMessageAfterDelay();
      });

    setTimeout(fetchData, refreshDelay);
  };

  const deleteId = (id) => {
    setLoading(true);
    setError(null);

    fetch(`http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080/parameters/${id}`, { method: 'DELETE' })
      .then(response => {
        if (!response.ok) {
          throw new Error('Network response was not ok');
        }
      })
      .then(() => {
        setLoading(false);
        setSuccessMessage(`Parameter ${id} deleted successfully`);
        clearHideMessageTimeout();
        hideMessageAfterDelay();
      })
      .catch(error => {
        setError(error);
        setLoading(false);
        clearHideMessageTimeout();
        hideMessageAfterDelay();
      });

    setTimeout(fetchData, refreshDelay);
  };

  const hideMessageAfterDelay = () => {
    timeoutRef.current = setTimeout(() => {
      setError(null);
      setSuccessMessage(null);
    }, messageDuration);
  };

  const clearHideMessageTimeout = () => {
    if (timeoutRef.current) {
      clearTimeout(timeoutRef.current);
    }
  };

  const handleClick = (params, id) => {
    updateParameters(params);
    sendToFPGA(parseInt(id));
  };

  return (
    <div>
      <div className="dbButtonContainer">
        {/* <div className="dbButton">
          <Pressable onPress={fetchData}>REFRESH</Pressable>
        </div> */}
        <div className="dbButton">
          <Pressable onPress={postData}>SAVE</Pressable>
        </div>
        <div className="dbButton">
          <Pressable onPress={deleteAll}>DELETE ALL</Pressable>
        </div>
        <div className="dbButton">
          <Pressable onPress={deleteAll}>SEND TO FPGA</Pressable>
        </div>
      </div>
      <div>
        {/* {loading && <p>Loading...</p>} */}
        {error && (
          <div className="errorMessage">
            Error: {error.message}
          </div>
        )}
        {successMessage && (
          <div className="successMessage">
            {successMessage}
          </div>
        )}
        {parameterIds.length > 0 && (
          <div className="scrollBox">
            <table>
              <thead>
                <tr>
                  <th>ID</th>
                  <th>x-Offset</th>
                  <th>y-Offset</th>
                  <th>Zoom</th>
                  <th>Max Iterations</th>
                  <th className="deleterCell">DELETE</th>
                </tr>
              </thead>
              <tbody>
                {parameterIds.map((id, index) => (
                  <tr key={index}>
                    <td onClick={() => handleClick(data[index])} style={{ cursor: 'pointer' }}>{id}</td>
                    {data && data[index] && (
                      <>
                        <td onClick={() => handleClick(data[index], id)} style={{ cursor: 'pointer' }}>{data[index].x_offset}</td>
                        <td onClick={() => handleClick(data[index], id)} style={{ cursor: 'pointer' }}>{data[index].y_offset}</td>
                        <td onClick={() => handleClick(data[index], id)} style={{ cursor: 'pointer' }}>{data[index].zoom}</td>
                        <td onClick={() => handleClick(data[index], id)} style={{ cursor: 'pointer' }}>{data[index].max_iterations}</td>
                        <td className="deleterCell">
                          <Pressable onPress={() => deleteId(id)}>X</Pressable>
                        </td>
                      </>
                    )}
                  </tr>
                ))}
              </tbody>
            </table>
          </div>
        )}
      </div>
    </div>
  );
};

export default GetPost;
