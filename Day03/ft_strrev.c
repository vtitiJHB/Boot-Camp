/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:16:04 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/23 11:16:11 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char    *ft_strev(char *str)
// {
//     int    i;
//     int    j;
//     char    temp[100];

//     i = 0;
//     j = 0;
//     while(str[i] != '\0')
//         {
//             temp[i] = str[i];
//             i++;
//         }
//     while(i >= 0)
//         str[j++] = temp[--i];
//     str[j] = '\0';
//     return str;
// }

char    *ft_strev(char *str)
{
	int		temp;
	char	*end;

	temp = 0;
	end = str;
	while (*end != '\0')
		end++;
	while (str < --end) {
		temp = *str;
		*str = *end;
		*end = temp;
		str++;
	}
	while (*end++ != '\0')
		str--;
	return ++str;
}