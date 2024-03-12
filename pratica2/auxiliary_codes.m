while true
    pos = get(0, 'PointerLocation');
    x = pos(1);
    y = pos(2);
    fprintf('Mouse Position: x=%d, y=%d\n', x, y);
    pause(0.1); % Adjust the delay as needed
end