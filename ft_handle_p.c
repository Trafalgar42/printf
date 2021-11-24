/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:41:57 by tromano           #+#    #+#             */
/*   Updated: 2021/11/24 15:36:03 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_p(t_sprint *tab)
{
	unsigned long long	num;
	char				*str;

	num = va_arg(tab->args, unsigned long long);
	tab->count += write(1, "0x", 2);
	str = ft_itoa_base_min(num, 16);
	ft_putstr(str);
	tab->count += ft_strlen(str);
	free(str);
}
