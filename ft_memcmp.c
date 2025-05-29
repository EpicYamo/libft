/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:45:26 by aaycan            #+#    #+#             */
/*   Updated: 2024/11/13 07:00:36 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ar1;
	unsigned char	*ar2;
	size_t			i;

	ar1 = (unsigned char *)s1;
	ar2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (!(ar1[i] == ar2[i]))
			return (ar1[i] - ar2[i]);
		i++;
	}
	return (0);
}
