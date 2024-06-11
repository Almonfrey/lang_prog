
% Program: Direct access in Matlab
% Author: Douglas Almonfrey
% Date: Jun 4, 2024
% Description: Direct access in Matlab
% License: CC BY


% Sample data
var1 = 123;
var2 = 'Hello, World!';
var3 = [1 2 3; 4 5 6; 7 8 9];
cell_array = {'apple', 'banana', 'cherry'};

% Save variables and cell array to a .dat file
save('datafile.dat', 'var1', 'var2', 'var3', 'cell_array', '-mat');

% Clear variables from workspace
clear var1 var2 var3 cell_array;

% Load data from the .dat file
load('datafile.dat', '-mat');

% Access the loaded variables and cell array
disp(var1);
disp(var2);
disp(var3);
disp(cell_array);
