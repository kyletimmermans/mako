#!/bin/sh

# Restore cursor and move to new line when terminated
trap 'tput cnorm; echo' EXIT
trap 'exit 127' HUP INT TERM

clear  # Clear the screen so no prompt
tput civis  # Make text cursor invisible
tput sc  # Save cursor position
while true; do
  for char in '-' '\' '|' '/'; do
    printf "%s\n" "$char"
    sleep 1
  done
done
