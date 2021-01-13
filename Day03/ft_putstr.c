/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:13:38 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/23 11:13:47 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void    ft_putchar(char c);

// void    ft_putstr(char *str)
// {
//     int    i;

//     i = 0;
//     while(str[i] != '\0')
//         ft_putchar(str[i++]);
// }

void    ft_putchar(char c);

void    ft_putstr(char *str)
{
    while(*str)
        ft_putchar(*str++);
}