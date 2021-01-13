/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:16:02 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/25 13:17:37 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char    *ft_strncpy(char *dest, char *src, unsigned int n)
// {
//     unsigned int    i;
//     i = 0;
//     while(i <= (n - 1))
//         {
//             dest[i] = src[i];
//             i++;
//         }
//     return dest;
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src && n-- > 0)
		*dest++ = *src++;
	while (n-- > 0)
		*dest++ = '\0';
	return dest;
}