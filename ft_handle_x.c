/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:11:57 by tromano           #+#    #+#             */
/*   Updated: 2021/11/24 15:50:59 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_x(t_sprint *tab)
{
	char	*strprint;
	int		num;

	num = va_arg(tab->args, unsigned int);
	strprint = ft_itoa_base_min_un(num, 16);
	ft_putstr(strprint);
	tab->count += ft_strlen(strprint);
	free(strprint);
}
