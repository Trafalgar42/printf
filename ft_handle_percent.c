/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolceromano <dolceromano@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:28:11 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 20:27:22 by dolceromano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_handle_percent(print *tab)
{
	tab->count += write(1, "%", 1);
}
