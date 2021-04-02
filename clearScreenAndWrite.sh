#!/bin/sh

# Restore cursor and move to new line when terminated
trap 'tput cnorm; echo' EXIT
trap 'exit 127' HUP INT TERM

# Clear the screen so no prompt
clear
# Make text cursor invisible
tput civis
# Save cursor position
tput sc
while true; do
  for char in '-' '\' '|' '/'; do
    # Back to saved position
    tput rc
    printf "%s" "$char"
    sleep 1
  done
done
