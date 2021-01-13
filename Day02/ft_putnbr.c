/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:09:08 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/22 13:09:23 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_putnbr(int nb)
{
    int    power;
    int    digit;
    
    digit = 0;
    power = 1;
    if(nb < 0)
        {
            ft_putchar('-');
            power = -1;
            if(nb < -9)
                power = -10;
        }
    while((nb / power) >= 10)
        power = power * 10;
    while(nb != 0)
        {
            ft_putchar((digit = nb /power) + '0');
            nb = nb % power;
            power = power / 10;
        }
    while(power != 0)
        ft_putchar(((power = power / 10) % 1) + '0');
    ft_putchar('\n');
    return;
}