/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:45:42 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:59:18 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (*(s1 + (++i)))
	{
		if (pos_char(s1, *(s1 + i), i) == 1)
		{
			j = -1;
			while (*(s2 + (++j)))
			{
				if (*(s1 + i) == *(s2 + j))
				{
					ft_putchar(*(s1 + i));
					break ;
				}
			}
		}
	}
}

int	main(int ac, char **str)
{
	if (ac == 3)
		ft_inter(str[1], str[2]);
	ft_putchar('\n');
	return (0);
}
