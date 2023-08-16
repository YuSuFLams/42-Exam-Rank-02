/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 22:01:41 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:19:53 by ylamsiah         ###   ########.fr       */
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

void	ft_epur_str(char *s)
{
	int	i;
	int	j;

	i = 0;
	while (*(s + i))
	{
		while (*(s + i) && (*(s + i) == '\t' || *(s + i) == ' '))
			i++;
		while (*(s + i) && *(s + i) != ' ' && *(s + i) != '\t')
		{
			ft_putchar(*(s + i));
			i++;
		}
		j = ft_strlen(s) - 1;
		while (*(s + j) && (*(s + j) == '\t' || *(s + j) == ' '))
			j--;
		if (i == j + 1)
			break ;
		else if (i != j)
			ft_putchar(' ');
	}
}

int	main(int ac, char **str)
{
	if (ac == 2)
		ft_epur_str(str[1]);
	ft_putchar('\n');
	return (0);
}
