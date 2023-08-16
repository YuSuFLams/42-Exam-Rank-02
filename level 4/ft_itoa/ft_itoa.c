/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:28:13 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/08/16 17:51:35 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_nbr(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	if (n < 0)
	{
		count++;
		n *= (-1);
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int		i;
	long	n;
	char	*s;

	n = nbr;
	if (n == -2147483648)
		return ("-2147483648");
	s = (char *)malloc(count_nbr(n) + 1 * sizeof(char));
	if (!s)
		return (s);
	i = count_nbr(n);
	*(s + i) = '\0';
	if (n == 0)
		*s = n + '0';
	if (n < 0)
	{
		*s = '-';
		n *= (-1);
	}
	while (n)
	{
		*(s + i - 1) = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (s);
}
