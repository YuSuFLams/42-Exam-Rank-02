/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:54:04 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:08:17 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_ulstr(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		else if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		s++;
	}
	return (s);
}

void	ft_putstr(char *s)
{
	ft_ulstr(s);
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}

int	main(int ac, char **str)
{
	if (ac == 2)
		ft_putstr(str[1]);
	ft_putchar('\n');
	return (0);
}
