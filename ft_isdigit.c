/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:40:09 by aaycan            #+#    #+#             */
/*   Updated: 2024/11/13 06:58:42 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int v)
{
	if (v >= '0' && v <= '9')
		return (1);
	return (0);
}
