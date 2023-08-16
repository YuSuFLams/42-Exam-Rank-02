/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:57:08 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:13:44 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_word(char *s)
{
	while (*s && (*s == ' ' || *s == '\t'))
		s++;
	while (*s && *s != ' ' && *s != '\t')
	{
		ft_putchar(*s);
		s++;
	}
}

int	main(int ac, char **str)
{
	if (ac == 2)
		ft_first_word(str[1]);
	ft_putchar('\n');
	return (0);
}
