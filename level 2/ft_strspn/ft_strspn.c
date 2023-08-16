/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:58:16 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 18:23:52 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strchr(const char *s, char x)
{
	int	i;

	i = -1;
	while (*(s + (++i)))
		if (*(s + i) == x)
			return (1);
	return (0);
}

size_t	ft_strspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (*(s + i))
	{
		if (!ft_strchr(reject, *(s + i)))
			break ;
		i++;
	}
	return (i);
}
