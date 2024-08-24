/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:46:18 by kinamura          #+#    #+#             */
/*   Updated: 2024/08/24 20:38:33 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	long long	ln;
	int			sign;

	sign = 1;
	ln = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (ft_isdigit(*str))
	{
		ln = 10 * ln + (*str - '0');
		str++;
		if (ft_isdigit(*str) && sign == 1
			&& ((LONG_MAX - (*str - '0')) / 10 < ln || ln >= LONG_MAX))
			return ((int)LONG_MAX);
		else if (ft_isdigit(*str) && sign == -1
			&& ((LONG_MIN + (*str - '0')) / 10 > -ln || ln < LONG_MIN))
			return ((int)LONG_MIN);
	}
	return (sign * (int)ln);
}
