/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:18:28 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/23 11:18:41 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_integer_table(int *tab, int size)
{
    int    i;
    int    j;
    int    lowest_index;
    int    temp;

    i = 0;
    j = i + 1;
    lowest_index = i;
    temp = 0;
    while(i < size)
        {
            while(j < size)
                {
                    if(tab[j] < tab[lowest_index])
                        lowest_index = j;
                    j++;
                }
                    if(lowest_index != i)
                        {
                            temp = tab[i];
                            tab[i] = tab[lowest_index];
                            tab[lowest_index] = temp;
                        }
                    i++;
                    j = i + 1;
                    lowest_index = i;
        }
}