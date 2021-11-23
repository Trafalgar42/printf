/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolceromano <dolceromano@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:52:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 20:27:24 by dolceromano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_handle_u(print *tab)
{
	char			*strprint;
	unsigned int	num;

	num = va_arg(tab->args, unsigned int);
	strprint = ft_itoa_unsigned(num);
	ft_putstr(strprint);
	tab->count += ft_strlen(strprint);
}
