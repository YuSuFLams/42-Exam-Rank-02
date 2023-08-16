/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:00:35 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:10:22 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_rot_13(char *s)
{
	while (*s)
	{
		if ((*s >= 'A' && *s <= 'M') || (*s >= 'a' && *s <= 'm'))
			*s += 13;
		else if ((*s >= 'N' && *s <= 'Z') || (*s >= 'n' && *s <= 'z'))
			*s -= 13;
		s++;
	}
	return (s);
}

void	ft_putstr(char *s)
{
	ft_rot_13(s);
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
