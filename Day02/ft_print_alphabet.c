/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:54:39 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/22 11:01:08 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_putchar(char c);

void    ft_print_alphabet(void)
{
    char    c;

    c = 97;
    while(c <= 122)
        {
            ft_putchar(c);
            c++;
        }
    ft_putchar('\n');
    return;
}
