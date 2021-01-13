/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:34:11 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/25 14:34:49 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char    *ft_strdup(char *src)
// {
//     char    *dup ;
//     int    i;

//     i = 0;
//     dup = (char*)malloc(LEN * sizeof(*src));
//     if(dup == NULL)
//         return NULL;
//     while(src[i] != '\0')
//         {
//             dup[i] = src[i];
//             i++;
//         }
//     dup[i] = '\0';
//     return dup;
// }

char    *ft_strdup(char *src)
{
	int		i;
	int		j;
    char    *dup ;

	i = 0;
	j = 0;
	while (src[i++] != '\0')
		;
    if((dup = (char *)malloc(i * sizeof(char))) == NULL)
        return NULL;
    while ((dup[j] = src[j]))
		j++;
    return dup;
}