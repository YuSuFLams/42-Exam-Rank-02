/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:53:58 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:13:10 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*s;
	int	i;

	if (start > end)
		s = (int *)malloc(start - end + 1 * sizeof(int));
	else
		s = (int *)malloc(end - start + 1 * sizeof(int));
	if (!s)
		return (s);
	i = 0;
	while (start != end)
	{
		*(s + i) = end;
		if (start > end)
			end += 1;
		else
			end -= 1;
		i++;
	}
	*(s + i) = end;
	return (s);
}
