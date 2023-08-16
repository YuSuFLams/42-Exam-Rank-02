/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:46:14 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:15:04 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
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
		*(s + i) = start;
		if (end > start)
			start += 1;
		else
			start -= 1;
		i++;
	}
	*(s + i) = start;
	return (s);
}
