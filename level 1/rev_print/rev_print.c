/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:58:04 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:11:01 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

void	ft_rev_print(char *s)
{
	int	i;

	i = ft_strlen(s);
	while (*(s + (--i)))
		ft_putchar(*(s + i));
}

int	main(int ac, char **str)
{
	if (ac == 2)
		ft_rev_print(str[1]);
	ft_putchar('\n');
	return (0);
}
