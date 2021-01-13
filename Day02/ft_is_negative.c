/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:56:51 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/22 12:57:30 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    ft_putchar(char c);

void    ft_is_negative(int n)
{
    if(n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
    ft_putchar('\n');
    return;
}
