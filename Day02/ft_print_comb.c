/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:02:34 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/22 13:02:52 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void    ft_putchar(char c);

// void    ft_print_comb(void)
// {
//     int    i;
//     int    j;
//     int    k;

//     i = 0;
//     j = 1;
//     k = 2;
//     while(i < 8)
//         {
//             ft_putchar(i + '0');
//             ft_putchar(j + '0');
//             ft_putchar(k + '0');
//             if(i == 7 && j == 8 && k == 9)
//                 break;
//             ft_putchar(',');
//             ft_putchar(' ');
//             k++;
//             if(k <= 9)
//                 continue;
//             i++;
//             j++;
//             k = j + 1;
//         }
//     ft_putchar('\n');
//     return;
// }

void    ft_putchar(char c);

void    ft_print_comb(void)
{
    int    i;
    int    j;
    int    k;

    i = 0;
    j = 1;
    k = 2;
    while(i <= 7)
        {
            ft_putchar(i + '0');
            ft_putchar(j + '0');
            ft_putchar(k + '0');
            if(i == 7 && j == 8 && k == 9)
                break;
            ft_putchar(',');
            ft_putchar(' ');
            if(++k <= 9)
                continue;
            i++;
            k = ++j + 1;
        }
    ft_putchar('\n');
}