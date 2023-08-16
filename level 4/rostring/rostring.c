/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:43:13 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 18:46:54 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rostring(char *s)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	while (*(s + i) && (*(s + i) == 32 || *(s + i) == 9))
		i++;
	start = i;
	while (*(s + i) && *(s + i) != 32 && *(s + i) != 9)
		i++;
	end = i;
	while (*(s + i))
	{
		while (*(s + i) && (*(s + i) == 32 || *(s + i) == 9))
			i++;
		while (*(s + i) && *(s + i) != 32 && *(s + i) != 9)
			ft_putchar(*(s + (i++)));
		ft_putchar(32);
	}
	i = start;
	while (i < end)
		ft_putchar(*(s + (i++)));
}

int	main(int ac, char **str)
{
	if (ac != 1)
		rostring(str[1]);
	ft_putchar('\n');
	return (0);
}
