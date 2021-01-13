/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:17:22 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/23 11:17:29 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int    ft_atoi(char *str)
// {
//     int    number;
//     int    i;
//     int    sign;

//     number = 0;
//     i = 0;
//     sign = 1;
//     if(str[i] == '-')
//         {
//             sign = -1;
//             i++;
//         }
//     while(str[i] != '\0')
//         {
//             if(str[i] < '0' || str[i] > '9')
//                 break;
//             number = (number * 10) + (str[i] - '0');
//             i++;
//         }
//     if(number)
//         return (number * sign);
//     else
//         return 0;
// }

int    ft_atoi(char *str)
{
    int    number;
    int    sign;

    number = 0;
	if (*str == '-')
		sign = -1;
	else
		sign = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str) {
		if (*str < '0' || *str > '9')
			break;
		number = (number * 10) + (*str++ - '0');
	}
	return number * sign;
}