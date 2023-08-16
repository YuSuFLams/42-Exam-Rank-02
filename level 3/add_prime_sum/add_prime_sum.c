/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:52:13 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:18:59 by ylamsiah         ###   ########.fr       */
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

int	nbr_is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i <= (n / i))
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	sum_nbr_prime(int n)
{
	int	i;
	int	sum;

	if (n <= 1)
		return (0);
	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (nbr_is_prime(i) == 1)
			sum += i;
		i++;
	}
	return (sum);
}

int	main(int ac, char **str)
{
	int	n;
	int	sum;

	if (ac == 2)
	{
		n = ft_atoi(str[1]);
		sum = sum_nbr_prime(n);
		ft_putnbr(sum);
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
