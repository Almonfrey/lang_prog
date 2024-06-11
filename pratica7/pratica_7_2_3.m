
% Program: Parsing in Matlab
% Author: Douglas Almonfrey
% Date: Jun 4, 2024
% Description: Parsing in Matlab
% License: CC BY

fileID = fopen('test_file.txt', 'r'); % Open the file for reading
if fileID == -1
    error('Error opening file'); % Display error message if file opening fails
end

while ~feof(fileID) % Loop until end of file
    line = fgetl(fileID); % Read a line from the file
    if ischar(line) % Check if line is a character array
        tokens = strsplit(line, ','); % Split the line into tokens using comma delimiter
        for i = 1:numel(tokens)
            disp(tokens{i}); % Display each token
        end
    end
end

fclose(fileID); % Close the file
