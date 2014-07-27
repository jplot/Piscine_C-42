#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/07/18 16:09:32 by jpucelle          #+#    #+#              #
#    Updated: 2014/07/18 16:09:32 by jpucelle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CMD=`ifconfig | grep "inet " | cut -d' ' -f2`
NUM=`ifconfig | grep "inet " | cut -d' ' -f2 | wc -l | tr -d ' '`

if [ "$NUM" -eq "2" ]; then
	echo "Je suis perdu!"
else
	echo "$CMD"
fi
