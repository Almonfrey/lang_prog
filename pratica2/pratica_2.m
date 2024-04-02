% Geometric computations
% Author: Douglas Almonfrey
% Date: April 02, 2024
% Description: Analizes mouse's quadrant
% License: CC BY

% In this code you have to click above the figure
% Get screen dimensions
screen_size = get(0, 'ScreenSize');
screen_width = screen_size(3);
screen_height = screen_size(4);

set(gcf,'CurrentCharacter',' ') % empty current character 
while true
    pos = get(0, 'PointerLocation');
    x = pos(1);
    y = screen_height - pos(2)+1; % y starts from bottow left
    fprintf('Mouse Position: x=%d, y=%d\n', x, y);

    % Calculate quadrant
    quad =  (x<screen_width/2 && y<screen_height/2)*1 + ...
            (x>screen_width/2 && y<screen_height/2)*2 + ...
            (x<screen_width/2 && y>screen_height/2)*3 + ...
            (x>screen_width/2 && y>screen_height/2)*4;
        
    % Display quadrant based on switch statement
    switch quad
        case 1
            disp('Quad. A');
        case 2
            disp('Quad. B');
        case 3
            disp('Quad. C');
        case 4
            disp('Quad. D');
    end
    
    figure(1)
    % Adjust delay as needed
    tic
    while toc<0.01
        ch = get(gcf,'CurrentCharacter');
    end
    if(ch=='c')
        break
    end
end