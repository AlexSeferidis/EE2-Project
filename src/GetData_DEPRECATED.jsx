import React, { useState } from 'react';
import './index.css'

const GetData = () => {
  const [data, setData] = useState([]);
  const [loading, setLoading] = useState(false);
  const [error, setError] = useState(null);

  const fetchData = () => {
    setLoading(true);
    setError(null);

    fetch('https://reqres.in/api/users')
      .then(response => {
        if (!response.ok) {
          throw new Error('Network response was not ok');
        }
        return response.json();
      })
      .then(data => {
        setData(data.data);
        setLoading(false);
      })
      .catch(error => {
        setError(error);
        setLoading(false);
      });
  };

  return (
    <div>
      <h1>Fetched Data</h1>
      {data.map((val, index) => (
        <>
        <h1 key={index} className='smallFont'>{val.first_name}</h1>
        <h2 key={index}>{val.last_name}</h2>
        </>
      ))}
      <button onClick={fetchData}>Fetch Data</button>
      {loading && <div>Loading...</div>}
      {error && <div>Error: {error.message}</div>}
      {/* {data && <pre>{JSON.stringify(data, null, 2)}</pre>} */}
    </div>
  );
};

export default GetData;
