/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:11:41 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/22 13:11:50 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_print_combn(int n)
{
    int    i;
    int    j;
    int    start;

    i = n - 1;
    j = 0;
    start = j;
    while(n <= 10)
        {
            ft_putchar((start++) + '0');
            if(start < (n - 1))
               continue;
            if(n == 1)
                ft_putchar('\b');
            ft_putchar(i + '0');
            if((start == 9 && i == 9 && n == 10) || (i == 9 && n == 1))
                break;
            ft_putchar(',');
            ft_putchar(' ');
            start = j;
            if(++i != 10)
                continue;
            start = ++j;
            i = (++n) - 1;
        }
    ft_putchar('\n');
    return;
}