/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:00:54 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 18:49:52 by ylamsiah         ###   ########.fr       */
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

void	put_str(char *s, int start, int end)
{
	int	i;

	i = start + 1;
	while (i <= end)
		ft_putchar(*(s + (i++)));
}

void	rev_wstr(char *s)
{
	int	i;
	int	start;
	int	end;
	int	j;

	i = ft_strlen(s) - 1;
	while (*(s + i))
	{
		j = 0;
		while (*(s + j) && (*(s + j) == 32 || *(s + j) == 9))
			j++;
		while (*(s + i) && (*(s + i) == 32 || *(s + i) == 9))
			i--;
		end = i;
		while (*(s + i) && *(s + i) != 32 && *(s + i) != 9)
			i--;
		start = i;
		put_str(s, start, end);
		if (i == j - 1)
			break ;
		else
			ft_putchar(' ');
	}
}

int	main(int ac, char **str)
{
	if (ac == 2)
		rev_wstr(str[1]);
	ft_putchar('\n');
	return (0);
}
