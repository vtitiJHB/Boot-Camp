/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:18:56 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/25 13:19:27 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char    *ft_strstr(char *str, char *to_find)
// {
//     int    i;
//     int    j;

//     i = 0;
//     j = 0;
//     if(to_find[j] == '\0')
//         return str;
//     while(str[i] != to_find[j])
//         i++;
//     str = &str[i];
//     while(str[j] == to_find[j])
//         {
//             j++;
//             if(str[j] == '\0' && to_find[j] == '\0')
//                 return str;
//         }
//     if(to_find[j] == '\0')
//         return str;
//     else
//         return NULL;
// }

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = i;
	k = 0;
	if (!*to_find)
		return str;
	while (str[i] != to_find[k] && str[i])
		i++;
	j = i;
	while (str[j] == to_find[k] && to_find[k]) {
		j++;
		k++;
	}
	if (k > 0 && !to_find[k])
		return str = &str[i];
	return NULL;
}