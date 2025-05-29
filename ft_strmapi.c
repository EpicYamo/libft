/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 07:05:21 by aaycan            #+#    #+#             */
/*   Updated: 2024/11/13 07:05:21 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fix;
	size_t	i;

	if (!f || !s)
		return (NULL);
	fix = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!fix)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		fix[i] = (*f)(i, s[i]);
		i++;
	}
	fix[i] = '\0';
	return (fix);
}
