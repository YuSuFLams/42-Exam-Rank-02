/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:30:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/30 18:39:33 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && (*str == '\n' || *str == '\t' || *str == ' '))
			str++;
		if (*str != '\n' && *str != '\t' && *str != ' ')
			count++;
		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
	}
	return (count);
}

void	freesplit(char **s, int i)
{
	while (s[i])
		free(s[i++]);
	free(s);
}

char	*ft_strcpy(char *s, int start, int end, char *str)
{
	int	i;

	i = 0;
	while (start < end)
		s[i++] = str[start++];
	s[i] = '\0';
	return (s);
}

char	**ft_split(char *str)
{
	char	**s;
	int		i;
	int		j;
	int		start;
	int		end;

	s = (char **)malloc(sizeof(char *) * (count(str) + 1));
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && j < count(str))
	{
		while (str[i] && (str[i] == '\n' || str[i] == '\t' || str[i] == ' '))
			i++;
		start = i;
		while (str[i] && str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
			i++;
		end = i;
		s[j] = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!s[j])
			return (freesplit(s, 0), NULL);
		s[j++] = ft_strcpy(s[j], start, end, str);
	}
	return (s[j] = NULL, s);
}
