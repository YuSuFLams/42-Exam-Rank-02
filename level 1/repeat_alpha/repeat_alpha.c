/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:10:58 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:12:10 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	pos_char(char x)
{
	if (x >= 'a' && x <= 'z')
		return (x - 'a');
	else if (x >= 'A' && x <= 'Z')
		return (x - 'A');
}

void	ft_repeat_alpha(char *s)
{
	int	i;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			i = pos_char(*s);
			while (i-- >= 0)
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
		ft_repeat_alpha(str[1]);
	ft_putchar('\n');
	return (0);
}
