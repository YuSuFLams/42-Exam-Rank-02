/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:03:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:04:25 by ylamsiah         ###   ########.fr       */
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

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_rstr_capitalizer(char *s)
{
	int	pos;
	int	i;

	ft_strlowcase(s);
	pos = 1;
	i = ft_strlen(s);
	while (*(s + (--i)))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (pos == 1)
				*(s + i) -= 32;
			pos = 0;
		}
		else if (*(s + i) == ' ' || *(s + i) == '\t')
			pos = 1;
		else
			pos = 0;
	}
	return (s);
}

void	ft_putstr(char *s)
{
	ft_rstr_capitalizer(s);
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
