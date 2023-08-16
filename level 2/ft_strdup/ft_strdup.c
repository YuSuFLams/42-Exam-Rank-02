/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:12:54 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 20:02:14 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	s = (char *)malloc(ft_strlen(src) + 1 * sizeof(char));
	if (!s)
		return (s);
	i = -1;
	while (*(src + (++i)))
		*(s + i) = *(src + i);
	*(s + i) = '\0';
	return (s);
}
