/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinamura <kinamura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 03:05:00 by kinamura          #+#    #+#             */
/*   Updated: 2024/06/21 03:05:16 by kinamura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(t_args *args)
{
	int				ret;
	unsigned int	num;

	ret = 0;
	num = va_arg(args->ap, unsigned long long);
	ret += ft_putunbr_base(num, BASE_LOW_16);
	return (ret);
}
