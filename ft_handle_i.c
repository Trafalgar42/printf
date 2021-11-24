/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:09:27 by tromano           #+#    #+#             */
/*   Updated: 2021/11/24 15:40:21 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_i(t_sprint *tab)
{
	int		i;
	char	*printstr;

	i = va_arg(tab->args, int);
	printstr = ft_itoa(i);
	ft_putstr(printstr);
	tab->count += ft_strlen(printstr);
	free(printstr);
}
