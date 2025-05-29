/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:35:37 by aaycan            #+#    #+#             */
/*   Updated: 2024/11/13 07:05:38 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*typecasts;
	unsigned char	tc_c;
	unsigned char	*lastchar;

	lastchar = NULL;
	typecasts = (unsigned char *)s;
	tc_c = (unsigned char)c;
	i = 0;
	while (typecasts[i])
	{
		if (typecasts[i] == tc_c)
			lastchar = &typecasts[i];
		i++;
	}
	if (tc_c == 0)
		return ((char *)&typecasts[ft_strlen((const char *)(typecasts))]);
	return ((char *)lastchar);
}
