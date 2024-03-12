% In this code you have to click above the figure
set(gcf,'currentchar',' ') % empty current character 
while true
    pos = get(0, 'PointerLocation');
    x = pos(1);
    y = pos(2);
    fprintf('Mouse Position: x=%d, y=%d\n', x, y);

    figure(1)
    % Waits 1 ms for character 'c' being pressed
    tic
    while toc<0.01
        ch = get(gcf,'CurrentCharacter');
    end
    if(ch=='c')
        break
    end
end

