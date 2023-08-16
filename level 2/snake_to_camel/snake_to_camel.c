/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 23:52:27 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:55:58 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strlowcase(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		s++;
	}
	return (s);
}

void	snake_to_camel(char *s)
{
	ft_strlowcase(s);
	if (*s == '_')
		s++;
	while (*s)
	{
		if (*s == '_')
		{
			s++;
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;
			ft_putchar(*s);
		}
		else
			ft_putchar(*s);
		s++;
	}
}

int	main(int ac, char **str)
{
	if (ac == 2)
		snake_to_camel(str[1]);
	ft_putchar('\n');
	return (0);
}
