
% Program: Serial access character by character in C++
% Author: Douglas Almonfrey
% Date: Jun 4, 2024
% Description: Implementation of serial access character by character in C++
% License: CC BY


filename = 'test_file.txt';
fileID = fopen(filename, 'r');

if fileID == -1
    fprintf('Error opening the file.\n');
    return; % Exit the program with an error
end

while ~feof(fileID)
    character = fread(fileID, 1, 'char');
    fprintf('%c\n', character);
end

fclose(fileID);
