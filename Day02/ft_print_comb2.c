/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:05:15 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/22 13:05:24 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_print_comb2(void)
{
    int    i;
    int    j;

    i = 0;
    j = 1;
    while(i < 99)
        {
            ft_putchar((i / 10) + '0');
            ft_putchar((i % 10) + '0');
            ft_putchar(' ');
            ft_putchar((j / 10) + '0');
            ft_putchar((j % 10) + '0');
            if((i / 10 == 9) && (i % 10 == 8))
                break;
            ft_putchar(',');
            ft_putchar(' ');
            j++;
            if(j < 10)
                continue;
            i++;
            j = i + 1;
        }
    ft_putchar('\n');
    return;
}