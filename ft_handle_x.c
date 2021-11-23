/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolceromano <dolceromano@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:11:57 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 20:20:43 by dolceromano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_handle_x(print *tab)
{
	char	*strprint;
	int		num;

	num = va_arg(tab->args, unsigned int);
	strprint = ft_itoa_base_min(num, 16);
	ft_putstr(strprint);
	tab->count += ft_strlen(strprint);
}
