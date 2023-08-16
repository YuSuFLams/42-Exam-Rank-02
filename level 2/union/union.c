/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:02:57 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:54:56 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (*(s1 + i))
		i++;
	j = -1;
	while (*(s2 + (++j)))
		*(s1 + i + j) = *(s2 + j);
	*(s1 + i + j) = '\0';
	return (s1);
}

int	pos_char(char *s, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (*(s + i) == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;

	ft_strcat(s1, s2);
	i = -1;
	while (*(s1 + (++i)))
		if (pos_char(s1, *(s1 + i), i) == 1)
			ft_putchar(*(s1 + i));
}

int	main(int ac, char **str)
{
	if (ac == 3)
		ft_union(str[1], str[2]);
	ft_putchar('\n');
	return (0);
}
