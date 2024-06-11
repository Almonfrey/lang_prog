# Program: Parsing in Python
# Author: Douglas Almonfrey
# Date: Jun 4, 2024
# Description: Parsing in Python
# License: CC BY

# Open the file for reading
with open('test_file.txt', 'r') as file:
    # Loop until end of file
    for line in file:
        if isinstance(line, str):  # Check if line is a string
            # Split the line into tokens using comma delimiter
            tokens = line.strip().split(',')  
            for token in tokens:
                print(token)  # Display each token
