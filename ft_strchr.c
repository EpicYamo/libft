/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 07:02:08 by aaycan            #+#    #+#             */
/*   Updated: 2024/11/13 07:02:10 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	char			*typecasts;
	unsigned char	tc_c;

	typecasts = (char *)s;
	tc_c = (unsigned char)c;
	i = 0;
	while (typecasts[i])
	{
		if (typecasts[i] == tc_c)
			return (&typecasts[i]);
		i++;
	}
	if (tc_c == 0)
		return ((char *)&typecasts[ft_strlen((const char *)(typecasts))]);
	else
		return (NULL);
}
