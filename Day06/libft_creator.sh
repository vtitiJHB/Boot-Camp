# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtiti <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/25 14:21:28 by vtiti             #+#    #+#              #
#    Updated: 2020/06/25 14:21:41 by vtiti            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c
ar rc libft.a *.o
ranlib libft.a