/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:00:13 by tromano           #+#    #+#             */
/*   Updated: 2021/11/24 15:39:12 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_d(t_sprint *tab)
{
	int		i;
	char	*printstr;

	i = va_arg(tab->args, int);
	printstr = ft_itoa(i);
	ft_putstr(printstr);
	tab->count += ft_strlen(printstr);
	free(printstr);
}
