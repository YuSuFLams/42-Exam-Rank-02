/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:09:12 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 18:52:54 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		n = n * 10 + *str - '0';
		str++;
	}
	return ((int )n * sign);
}

void	ft_putnbr(int nbr)
{
	long	n;

	n = nbr;
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	ft_fprime(int n)
{
	int	i;

	if (!n || n == 1)
		ft_putnbr(n);
	i = 2;
	while (n > 1)
	{
		while (i <= n)
		{
			if (n % i == 0)
			{
				ft_putnbr(i);
				if (i != n)
					ft_putchar('*');
				break ;
			}
			i++;
		}
		n /= i;
	}
}

int	main(int ac, char **str)
{
	int	n;

	if (ac == 2)
	{
		n = ft_atoi(str[1]);
		if (n >= 0)
			ft_fprime(n);
	}
	ft_putchar('\n');
	return (0);
}
