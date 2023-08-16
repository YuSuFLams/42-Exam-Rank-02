/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 19:34:48 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:09:07 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **str)
{
	int	i;

	if (ac == 4)
	{
		if (!str[2][1] && !str[2][1])
		{
			i = 0;
			while (str[1][i])
			{
				if (str[1][i] == str[2][0])
					str[1][i] = str[3][0];
				ft_putchar(str[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
