import sqlite3

class FractalDB:
    def __init__(self, file_name='fractal.db'):

        self.file_name = file_name
        self.__select_parameter_id = 1
        self.conn = sqlite3.connect(self.file_name)
        self.c = self.conn.cursor()
        
        
    def insert_parameters(self, x_offset, y_offset, zoom, max_iterations):
        self.c.execute('''INSERT OR IGNORE INTO parameters (x_offset, y_offset, zoom, max_iterations)
                          VALUES (?, ?, ?, ?)''', (x_offset, y_offset, zoom, max_iterations))
        self.conn.commit()
    def add_parameters(self, x_offset, y_offset, zoom, max_iterations):
        self.insert_parameters(x_offset, y_offset, zoom, max_iterations)
        self.__select_parameter_id = self.c.lastrowid
        return self.c.lastrowid

    def import_parameters(self, csv_file):
        with open(csv_file, 'r') as f:
            for line in f:
                x_offset, y_offset, zoom, max_iterations = line.split(',')
                self.insert_parameters(x_offset, y_offset, zoom, max_iterations)
        
    def get_parameter_ids(self):
        self.c.execute('''SELECT parameter_id FROM parameters ORDER BY parameter_id''')
        return self.c.fetchall()
    
    def get_parameters_by_id(self, parameter_id):
        self.c.execute('''SELECT x_offset, y_offset, zoom, max_iterations
                          FROM parameters
                          WHERE parameter_id = ?''', (parameter_id,))
        return self.c.fetchone()
    def get_parameters(self):
        return self.get_parameters(self.__select_parameter_id)
    def delete_parameters(self, parameter_id):
        self.c.execute('''DELETE FROM parameters WHERE parameter_id = ?''', (parameter_id,))
        if parameter_id == self.__select_parameter_id:
            self.__select_parameter_id = self.c.lastrowid
        self.conn.commit()
    def get_db(self):
        self.c.execute('''SELECT * FROM parameters''')
        return self.c.fetchall()
    def select_parameter_id(self, parameter_id):
        if parameter_id in self.get_parameter_ids():
            self.__select_parameter_id = parameter_id
        else:
            self.__select_parameter_id = 1
        return self.__select_parameter_id
    def reset_db(self):
        self.c.execute('''DROP TABLE IF EXISTS parameters''')
        self.conn.commit()
        self.c.execute('''CREATE TABLE IF NOT EXISTS parameters
                         (parameter_id INTEGER PRIMARY KEY, 
                          x_offset REAL,
                          y_offset REAL,
                          zoom REAL,
                          max_iterations INTEGER)'''
                      )
        self.conn.commit()
        self.__select_parameter_id = 1

    def close(self):
        self.conn.close()


