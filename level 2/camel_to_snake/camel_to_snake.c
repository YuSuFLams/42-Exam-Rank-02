/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 00:03:31 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:07:54 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	camel_to_snake(char *s)
{
	if (*s >= 'A' && *s <= 'Z')
	{
		*s += 32;
		ft_putchar(*s);
		s++;
	}
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
		{
			ft_putchar('_');
			*s += 32;
		}
		ft_putchar(*s);
		s++;
	}
}

int	main(int ac, char **str)
{
	if (ac == 2)
		camel_to_snake(str[1]);
	ft_putchar('\n');
	return (0);
}
