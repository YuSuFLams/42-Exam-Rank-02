/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:31:35 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:01:34 by ylamsiah         ###   ########.fr       */
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

char	*ft_str_capitalizer(char *s)
{
	int	pos;

	ft_strlowcase(s);
	pos = 1;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			if (pos == 1)
				*s -= 32;
			pos = 0;
		}
		else if (*s == ' ' || *s == '\t')
			pos = 1;
		else
			pos = 0;
		s++;
	}
	return (s);
}

void	ft_putstr(char *s)
{
	ft_str_capitalizer(s);
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **str)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			ft_putstr(str[i]);
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
