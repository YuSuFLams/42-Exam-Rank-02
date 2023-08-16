/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:13:32 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:58:41 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	char	s;
	int		i;

	i = 8;
	s = 0;
	while ((--i) >= 0)
	{
		s = (octet >> i) % 2 + '0';
		ft_putchar(s);
		s = 0;
	}
}
