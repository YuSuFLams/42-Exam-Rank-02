/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:04:46 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:09:44 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_rotone(char *s)
{
	while (*s)
	{
		if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
			*s += 1;
		else if (*s == 'Z' || *s == 'z')
			*s -= 25;
		s++;
	}
	return (s);
}

void	ft_putstr(char *s)
{
	ft_rotone(s);
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
