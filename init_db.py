import sqlite3
import csv
from db_operations import FractalDB


def create_tables():
    #Create a table with parameter_id, x_offset, y_offset, zoom, and max_iterations
    conn = sqlite3.connect('fractal.db')
    c = conn.cursor()
    c.execute('''CREATE TABLE IF NOT EXISTS parameters
                 (parameter_id INTEGER PRIMARY KEY, 
                  x_offset REAL,
                  y_offset REAL,
                  zoom REAL,
                  max_iterations INTEGER)'''
              )
    conn.commit()
    conn.close()



if __name__ == '__main__':
    create_tables()
    db = FractalDB()
    db.import_parameters('parameters.csv')
    db.close()

