/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 05:13:34 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/07/27 19:55:20 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	s;
	unsigned char	d;
	unsigned char	r;

	d = (octet << 4);
	s = (octet >> 4);
	r = d | s;
	return (r);
}
