function calculate_circle()
    % Define the value of pi
    PI = 3.14159;
    
    % Calculates circumference and area for a circle
    radius = input('Enter the radius of the circle: ');
    circumference = 2 * PI * radius;
    area = PI * radius^2;
    fprintf('Circumference of the circle: %.2f\n', circumference);
    fprintf('Area of the circle: %.2f\n', area);
end