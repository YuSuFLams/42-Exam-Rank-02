/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:31:23 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:05:49 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	ft_atoi(char *s)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= (-1);
		s++;
	}
	while (*s && (*s >= '0' && *s <= '9'))
	{
		n = n * 10 + *s - '0';
		s++;
	}
	return ((int )n * sign);
}

int	ft_pgcd(int a, int b)
{
	int	i;
	int	pos;
	int	x;

	if (a > b)
		x = b;
	else
		x = a;
	i = 2;
	pos = 1;
	while (i <= x)
	{
		if (a % i == 0 && b % i == 0)
			pos = i;
		i++;
	}
	return (pos);
}

int	main(int ac, char **str)
{
	int	a;
	int	b;
	int	x;

	if (ac == 3)
	{
		a = ft_atoi(str[1]);
		b = ft_atoi(str[2]);
		if (a > 0 && b > 0)
		{
			x = ft_pgcd(a, b);
			ft_putnbr(x);
		}
	}
	ft_putchar('\n');
	return (0);
}
