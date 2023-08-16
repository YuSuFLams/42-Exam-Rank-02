/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:45:28 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:07:46 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hidenp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (*(s2 + (++j)))
		if (*(s2 + j) == *(s1 + i))
			i++;
	if (!*(s1 + i))
		ft_putchar('1');
	else
		ft_putchar('0');
}

int	main(int ac, char **str)
{
	if (ac == 3)
		ft_hidenp(str[1], str[2]);
	ft_putchar('\n');
	return (0);
}
