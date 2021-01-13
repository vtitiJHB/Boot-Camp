/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:14:52 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/23 11:15:00 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int    ft_strlen(char *str)
// {
//     int    i;
    
//     i = 0;
//     while(str[i] != '\0')
//         i++;
//     return i;
// }

int		ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
		p++;
	return p - str;
}