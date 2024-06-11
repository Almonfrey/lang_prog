'''
Program: Serial access character by character 
Author: Douglas Almonfrey
Date: March 04, 2024
Description: Implementation of serial access character by character
License: CC BY
'''

filename = "test_file.txt"

# Open the file for reading
file = open(filename, "r")

# Check if the file was opened successfully
if file:
    # Read each character from the file serially and print it on the screen
    while True:
        character = file.read(1)  # Read one character at a time
        if not character:  # If the end of file is reached
            break
        print(character)  # Print the character
else:
    print("Error opening the file.")

# Close the file
file.close()
