/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:03:36 by aaycan            #+#    #+#             */
/*   Updated: 2024/11/13 07:18:39 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ad, int v, size_t bytes)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)ad;
	while (bytes > 0)
	{
		*(tmp++) = (unsigned char)v;
		bytes--;
	}
	return (ad);
}
