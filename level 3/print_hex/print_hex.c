/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:22:50 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:04:39 by ylamsiah         ###   ########.fr       */
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

void	print_hex(unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 0 && n <= 15)
		ft_putchar(base[n]);
	else
	{
		print_hex(n / 16);
		print_hex(n % 16);
	}
}

int	main(int ac, char **str)
{
	int	a;

	if (ac == 2)
	{
		a = ft_atoi(str[1]);
		if (a >= 0)
			print_hex(a);
	}
	ft_putchar('\n');
	return (0);
}
