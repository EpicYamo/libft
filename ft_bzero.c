/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:34:10 by aaycan            #+#    #+#             */
/*   Updated: 2024/11/13 06:59:37 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*string;

	i = 0;
	string = (unsigned char *)s;
	while (i < n)
	{
		string[i] = '\0';
		i++;
	}
}
