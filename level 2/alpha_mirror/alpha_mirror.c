/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:37:13 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:52:21 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*alpha_mirror(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = 'a' + 'z' - *s;
		else if (*s >= 'A' && *s <= 'Z')
			*s = 'Z' + 'A' - *s;
		s++;
	}
	return (s);
}

void	ft_putstr(char *s)
{
	alpha_mirror(s);
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
