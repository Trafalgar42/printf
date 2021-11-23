/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolceromano <dolceromano@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:41:57 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 20:15:50 by dolceromano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_handle_p(print *tab)
{
	unsigned int		num;
	char				*str;
	num = va_arg(tab->args, unsigned int);
	tab->count += write(1, "0x", 2);
	str = ft_itoa_base_min(num, 16);
	ft_putstr(str);
	tab->count += ft_strlen(str);
}
