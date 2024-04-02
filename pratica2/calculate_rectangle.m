function calculate_rectangle()
    % Calculates perimeter and area for a rectangle
    dimensions = input('Enter the length and width of the rectangle - length width: ', 's');
    dimensions = strsplit(dimensions);
    length = str2double(dimensions{1});
    width = str2double(dimensions{2});
    perimeter = 2 * (length + width);
    area = length * width;
    fprintf('Perimeter of the rectangle: %.2f\n', perimeter);
    fprintf('Area of the rectangle: %.2f\n', area);
end
