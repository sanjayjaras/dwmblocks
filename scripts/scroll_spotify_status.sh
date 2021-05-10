#!/bin/bash

# see man zscroll for documentation of the following parameters
# /home/sanjay/anaconda3/bin/zscroll -l 30 \
#         --delay 0.4 \
#         --scroll-padding "  " \
#         --match-command "$HOME/.config/polybar/scripts/get_spotify_status.sh --status" \
#         --match-text "Playing" "--scroll 1" \
#         --match-text "Paused" "--scroll 0" \
#         --update-check true "$HOME/.config/polybar/scripts/get_spotify_status.sh" &


# wait
rand=$((1 + $RANDOM % 3))
format='{{ title }} - {{ album }} {{ artist }}'
if [[ $rand -eq 1 ]]
 then
    format='{{title}}'
 elif [[ $rand == 2  ]]
 then
    format='{{artist}}'
 elif [[ $rand == 3  ]]   
 then
    format='{{album}}'
    
fi
#echo $format

prefix=""
status=$(~/applications/dwmblocks/scripts/get_spotify_status.sh --status)
if [[ $status == "Playing" || $status == "Paused" ]]; then
prefix="${status} -"
fi
msg=$(~/applications/dwmblocks/scripts/get_spotify_status.sh 1 2 $format)
msg="$prefix $msg"
printf "%-15s" "$msg" | cut -c 1-15