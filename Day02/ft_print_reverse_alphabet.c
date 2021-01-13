/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:49:05 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/22 12:50:00 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    ft_putchar(char c);

void    ft_print_reverse_alphabet(void)
{
    char    c;

    c = 122;
    while(c >= 97)
        {
            ft_putchar(c);
            c--;
        }
    ft_putchar('\n');
    return;
}