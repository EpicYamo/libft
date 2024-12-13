/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:59:26 by aaycan            #+#    #+#             */
/*   Updated: 2024/11/13 06:58:22 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspacemod(int *i, const char *strwosp)
{
	while (strwosp[*i] == '\t' || strwosp[*i] == '\n' || strwosp[*i] == '\v'
		|| strwosp[*i] == '\f' || strwosp[*i] == '\r' || strwosp[*i] == ' ')
	{
		(*i)++;
	}
	return (*i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	strg;

	sign = 1;
	strg = 0;
	i = 0;
	ft_isspacemod(&i, str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		strg = (10 * strg) + (str[i] - '0');
		i++;
	}
	return (strg * sign);
}
