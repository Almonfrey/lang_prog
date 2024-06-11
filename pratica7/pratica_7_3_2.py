'''
Program: Direct Access in Python
Author: Douglas Almonfrey
Date: March 04, 2024
Description: Implementation of Direct Access in Python
License: CC BY
'''

import pickle

# Sample data
var1 = 123
var2 = 'Hello, World!'
var3 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
list = ['apple', 'banana', 'cherry']

# Save variables to a pickle file
with open('datafile.pkl', 'wb') as file:
    pickle.dump({'var1': var1, 'var2': var2, 'var3': var3, 'list': list}, file)

# Clear variables (in Python, we just delete them)
del var1, var2, var3, list

# Load data from the pickle file
with open('datafile.pkl', 'rb') as file:
    loaded_data = pickle.load(file)

# Access the loaded variables and cell array
print(loaded_data['var1'])
print(loaded_data['var2'])
print(loaded_data['var3'])
print(loaded_data['list'])
