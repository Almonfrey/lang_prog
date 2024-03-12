% Program: Geometric computations
% Author: Douglas Almonfrey
% Date: March 04, 2024
% Description: Computes some geometric aspects of rectangles and circles
% License: CC BY

% Define the value of pi
PI = 3.14159;

% Prompt user for choice
choice = input('Choose an option:\n1. Calculate circumference and area of a circle;\n2. Calculate perimeter and area of a rectangle.\nYour option is: ');

if choice == 1
    % Calculates circumference and area for a circle
    radius = input('Enter the radius of the circle: ');
    circumference = 2 * PI * radius;
    area = PI * radius^2;
    fprintf('Circumference of the circle: %.2f\n', circumference);
    fprintf('Area of the circle: %.2f\n', area);
elseif choice == 2
    % Calculates perimeter and area for a rectangle
    dimensions = input('Enter the length and width of the rectangle - length width: ', 's');
    dimensions = strsplit(dimensions);
    length = str2double(dimensions{1});
    width = str2double(dimensions{2});
    perimeter = 2 * (length + width);
    area = length * width;
    fprintf('Perimeter of the rectangle: %.2f\n', perimeter);
    fprintf('Area of the rectangle: %.2f\n', area);
else
    disp('Invalid choice');
end
