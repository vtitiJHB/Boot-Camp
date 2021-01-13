/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:22:19 by vtiti             #+#    #+#             */
/*   Updated: 2020/06/26 08:22:34 by vtiti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#   define FT_H   

#include <stdlib.h>
#include <unistd.h>
#define LEN     42

void    ft_putchar(char c);

void    ft_putstr(char *str);

int     ft_strcmp(char *s1, char *s2);

int     ft_strlen(char *str);

void    ft_swap(int *a, int *b);

#endif
