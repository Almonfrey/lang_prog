% Program: Geometric computations
% Author: Douglas Almonfrey
% Date: March 04, 2024
% Description: Computes some geometric aspects of rectangles and circles
% License: CC BY

set(gcf,'CurrentCharacter',' ') % empty current character 
for i = 1:Inf
    % Prompt user for choice
    choice = input('Choose an option:\n1. Calculate circumference and area of a circle;\n2. Calculate perimeter and area of a rectangle.\nYour option is: ');

    if choice == 1
        calculate_circle();
    elseif choice == 2
        calculate_rectangle();
    else
        disp('Invalid choice');
    end

    figure(1)
    % Adjust delay as needed
    tic
    while toc<1
        ch = get(gcf,'CurrentCharacter');
    end
    if(ch==27)
        break
    end
end
