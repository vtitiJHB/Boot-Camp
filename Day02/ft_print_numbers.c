/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:53:30 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/22 12:54:13 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_putchar(char c);

void    ft_print_numbers(void)
{
    char    i;

    i = 48;
    while(i <= 57)
        {
            ft_putchar(i);
            i++;
        }
    ft_putchar('\n');
    return;
}