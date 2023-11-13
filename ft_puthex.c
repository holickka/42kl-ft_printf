/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsim <hsim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:33:16 by hsim              #+#    #+#             */
/*   Updated: 2023/11/13 21:11:17 by hsim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_countnum(unsigned int n)
{
	int		count;
	long	nlong;

	nlong = (long)n;
	count = 1;
	if (nlong < 0)
	{
		nlong *= -1;
		count++;
	}
	while (nlong >= 16)
	{
		nlong /= 16;
		count++;
	}
	return (count);
}

int	ft_puthex(unsigned int n, char c)
{
	int		len;

	len = ft_countnum(n);
	if (n >= 16)
	{
		ft_puthex(n / 16, c);
		ft_puthex(n % 16, c);
	}
	if (n >= 10 && n <= 15 && c == 'x')
	{
		return (ft_putchar(n - 10 + 'a'));
	}
	else if (n >= 10 && n <= 15 && c == 'X')
	{
		ft_putchar(n - 10 + 'A');
	}
	if (n >= 0 && n <= 9)
	{
		n += '0';
		ft_putchar(n);
	}
	return (len);
}

#include <stdio.h>
int	main()
{
	int	y = ft_puthex(1999, 'x');
//	int	x = 1999;	
//	int y = printf("%x", x);
	printf("\n");
	printf("%d\n", y);
}