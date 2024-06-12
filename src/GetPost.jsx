import React, { useState } from 'react';
import { Pressable, Text, View, StyleSheet } from 'react-native';

const GetPost = ({ x, y, zoom, maxItr }) => {
  const [data, setData] = useState(null);
  const [loading, setLoading] = useState(false);
  const [error, setError] = useState(null);
  const [successMessage, setSuccessMessage] = useState(null);
  const [parameterIds, setParameterIds] = useState([]);

  // Fetch data function (GET request)
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
        // Assuming data is { "status": "success", "parameter_id": [] }
        if (data && Array.isArray(data.parameter_id)) {
          setParameterIds(data.parameter_id); // Set parameter_id array to state
          // Iterate through each parameter_id and fetch details
          const fetchPromises = data.parameter_id.map(id => {
            return fetch(`http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080/parameters/${id}`)
              .then(response => {
                if (!response.ok) {
                  throw new Error(`Failed to fetch parameter ${id}`);
                }
                return response.json();
              });
          });

          // Wait for all fetch requests to complete
          return Promise.all(fetchPromises);
        } else {
          throw new Error('No parameter IDs found');
        }
      })
      .then(responses => {
        // responses is an array of JSON objects from each fetch request
        setData(responses);
        setLoading(false);
      })
      .catch(error => {
        setError(error);
        setLoading(false);
      });
  };

  // Post data function (POST request)
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
        setSuccessMessage(JSON.stringify(data.parameter_id, null, 2));
        console.log('Post response data:', data);
      })
      .catch(error => {
        setError(error);
        setLoading(false);
      });
      fetchData();
  };

  const deleteAll = () => {
    setLoading(true);
    setError(null);

    fetch(`http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080/parameters`,
      {method: 'DELETE'}
    )
      
      .then(response => {
        if (!response.ok) {
          throw new Error('Network response was not ok');
        }
      })
      .then(responses => {
        setLoading(false);
      })
      .catch(error => {
        setError(error);
        setLoading(false);
      });
  }

  return (
    <View style={styles.container}>
      <div className="dbButtonContainer">
        <div className="dbButton">
          <Pressable onPress={fetchData} style={styles.button}>
            <Text style={styles.buttonText}>FETCH</Text>
          </Pressable>
        </div>
        <div className="dbButton">
          <Pressable onPress={postData} style={styles.button}>
            <Text style={styles.buttonText}>POST</Text>
          </Pressable>
        </div>
        <div className="dbButton">
          <Pressable onPress={deleteAll} style={styles.button}>
            <Text style={styles.buttonText}>DELETE ALL</Text>
          </Pressable>
        </div>
      </div>

      {loading && <Text>Loading...</Text>}
      {error && <Text>Error: {error.message}</Text>}
      {successMessage && (
        <div className="successMessage">
          Successfully stored at index {successMessage}
        </div>
      )}
      {parameterIds.length > 0 && (
        <View style={styles.parameterIds}>
          <Text style={styles.successText}>Parameter IDs:</Text>
          <View style={styles.tableContainer}>
            <View style={styles.tableRow}>
              <Text style={[styles.tableHeader, styles.cell]}>ID</Text>
              <Text style={[styles.tableHeader, styles.cell]}>x_offset</Text>
              <Text style={[styles.tableHeader, styles.cell]}>y_offset</Text>
              <Text style={[styles.tableHeader, styles.cell]}>zoom</Text>
              <Text style={[styles.tableHeader, styles.cell]}>max_iterations</Text>
            </View>
            {parameterIds.map((id, index) => (
              <View key={index} style={styles.tableRow}>
                <Text style={[styles.tableData, styles.cell]}>{id}</Text>
                {data && data[index] && (
                  <>
                    <Text style={[styles.tableData, styles.cell]}>{data[index].x_offset}</Text>
                    <Text style={[styles.tableData, styles.cell]}>{data[index].y_offset}</Text>
                    <Text style={[styles.tableData, styles.cell]}>{data[index].zoom}</Text>
                    <Text style={[styles.tableData, styles.cell]}>{data[index].max_iterations}</Text>
                  </>
                )}
              </View>
            ))}
          </View>
        </View>
      )}
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
    padding: 20,
  },
  button: {
    alignItems: 'center',
    justifyContent: 'center',
    paddingVertical: 12,
    paddingHorizontal: 32,
    borderRadius: 4,
    backgroundColor: '#007bff',
    marginBottom: 10,
  },
  buttonText: {
    fontSize: 16,
    color: 'white',
  },
  successText: {
    fontWeight: 'bold',
    marginBottom: 5,
  },
  successData: {
    fontFamily: 'monospace',
    fontSize: 12,
  },
  parameterIds: {
    marginTop: 10,
  },
  tableContainer: {
    backgroundColor: 'white',
    borderRadius: 4,
    borderWidth: 1,
    borderColor: 'black',
    padding: 10,
  },
  tableRow: {
    flexDirection: 'row',
    alignItems: 'center',
    justifyContent: 'space-around',
    marginBottom: 5,
  },
  tableHeader: {
    fontWeight: 'bold',
    flex: 1,
    textAlign: 'center',
  },
  tableData: {
    flex: 1,
    textAlign: 'center',
    fontFamily: 'monospace',
  },
  cell: {
    padding: 10,
    borderRightWidth: 1,
    borderRightColor: 'black',
  },
});

export default GetPost;
