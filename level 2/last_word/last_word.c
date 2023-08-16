/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:36:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:00:14 by ylamsiah         ###   ########.fr       */
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

void	last_word(char *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (*(s + i) && (*(s + i) == ' ' || *(s + i) == '\t'))
		i--;
	while (*(s + i) && *(s + i) != ' ' && *(s + i) != '\t')
		i--;
	i++;
	while (*(s + i) && *(s + i) != ' ' && *(s + i) != '\t')
	{
		ft_putchar(*(s + i));
		i++;
	}
}

int	main(int ac, char **str)
{
	if (ac == 2)
		last_word(str[1]);
	ft_putchar('\n');
	return (0);
}
