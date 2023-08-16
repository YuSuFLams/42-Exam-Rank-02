/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:19:26 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:07:06 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	n;

	n = nbr;
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * (-1));
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (*str == 32 && (*str >= 9 && *str <= 13))
		str++;
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

int	main(int ac, char **str)
{
	int	a;
	int	b;

	if (ac == 4)
	{
		a = ft_atoi(str[1]);
		b = ft_atoi(str[3]);
		if (str[2][0] == '+' && !str[2][1])
			ft_putnbr(a + b);
		if (str[2][0] == '-' && !str[2][1])
			ft_putnbr(a - b);
		if (str[2][0] == '*' && !str[2][1])
			ft_putnbr(a * b);
		if (str[2][0] == '/' && b != 0 && !str[2][1])
			ft_putnbr(a / b);
		if (str[2][0] == '%' && b != 0 && !str[2][1])
			ft_putnbr(a % b);
	}
	ft_putchar('\n');
	return (0);
}
