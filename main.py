#Create a simple FastAPI template
# Path: main.py
from fastapi import FastAPI, Request, Response, WebSocket
from fastapi.middleware.cors import CORSMiddleware
from db_operations import FractalDB
import asyncio

FAIL_MESS = {"status": "failed"}
SUCC_MESS = {"status": "success"}



app = FastAPI()
db = FractalDB()

@app.get('/')
async def read_root():
    try:
        table = db.get_db()
        return {**SUCC_MESS, 'table': table}
    except:
        return {**FAIL_MESS, 'table': None}


@app.get('/parameters/{parameter_id}')
async def read_parameters(parameter_id: int):
    try:
        fetch_parameters = db.get_parameters_by_id(parameter_id)
        return {**SUCC_MESS, 'x_offset': fetch_parameters[0], 'y_offset': fetch_parameters[1], 'zoom': fetch_parameters[2], 'max_iterations': fetch_parameters[3]}
    except:
        return {**FAIL_MESS, 'x_offset': 'lol',}
        return {**FAIL_MESS, 'x_offset': None,
                'y_offset': None,
                'zoom': None,
                'max_iterations': None
                }

@app.delete('/parameters/{parameter_id}')
async def delete_parameters(parameter_id: int):
    try:
        db.delete_parameters(parameter_id)
        return SUCC_MESS
    except:
        return FAIL_MESS

    
@app.get('/parameters')
async def read_selected_parameters():
    try:
        parameters = db.get_parameters()
        return {**SUCC_MESS, 'x_offset': parameters[0], 'y_offset': parameters[1], 'zoom': parameters[2], 'max_iterations': parameters[3]}
    except:
        return {**FAIL_MESS, 'x_offset': None,
                'y_offset': None,
                'zoom': None,
                'max_iterations': None
                }


#Update 
@app.options('/parameters')
async def options_parameters():
    return {'methods': ['GET', 'POST']}


@app.post('/parameters')
async def create_parameters(x_offset: float, y_offset: float, zoom: float, max_iterations: int):
    try:
        new_param_id = db.add_parameters(x_offset, y_offset, zoom, max_iterations)
        return {**SUCC_MESS, "parameter_id": new_param_id}
    except:
        return {**FAIL_MESS, "parameter_id": None}
    

@app.get('/parameter_id')
async def read_parameter_ids():
    try:
        param_ids = db.get_parameter_ids()
        return {**SUCC_MESS, 'parameter_id': param_ids}
    except:
        return {**FAIL_MESS, 'parameter_id': None}

@app.post('/parameter_id/{parameter_id}')
async def select_parameter_id(parameter_id: int):
    try:
        current_id = db.select_parameter_id(parameter_id)
        return {**SUCC_MESS, 'parameter_id': current_id}
    except:
        return {**FAIL_MESS, 'parameter_id': None}

@app.delete('/parameters')
async def delete_parameters():
    try:
        db.reset_db()
        return SUCC_MESS
    except:
        return FAIL_MESS

app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)


if __name__ == '__main__':
    import uvicorn
    uvicorn.run("main:app", port=8080, host='0.0.0.0', reload=True)
