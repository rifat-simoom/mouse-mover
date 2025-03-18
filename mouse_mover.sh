#!/bin/bash

while true; do
    # Get the current mouse position
    eval $(xdotool getmouselocation --shell)
    
    # Move the mouse slightly (5 pixels right and back)
    xdotool mousemove $((X+5)) $Y
    sleep 0.2
    xdotool mousemove $X $Y
    
    # Wait for 1 minute
    sleep 60
done
