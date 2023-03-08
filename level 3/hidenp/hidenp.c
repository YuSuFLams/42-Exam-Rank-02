/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:28:14 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/03/08 17:30:47 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_hidenp(char *s1, char *s2)
{
    int i;
    int j;
    int k;
    int pos;

    pos = 0;
    k = 0;
    i = 0;
    j = 0;
    while (*(s1 + i))
    {
        j = k;
        while (*(s2 + j))
        {
            if (*(s1 + i) == *(s2 + j))
            {
                pos = 1;
                break;
            }
            else
                pos = 0;
            j++;
            ++k;
        }
        j = k;
        i++;
    }
    return (pos);
}

int main(int ac, char **str)
{
    int n;
    
    if (ac == 3)
    {
        if (ft_hidenp(str[1], str[2]) == 1)
            ft_putchar('1');
        else
            ft_putchar('0');
    }
    ft_putchar('\n');
    return (0);
}