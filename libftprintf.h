/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolceromano <dolceromano@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:37:47 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 19:48:24 by dolceromano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct sprint
{
    va_list args;
    int     count;
}       print;

char	*ft_itoa_base(int n, int base);
char	*ft_itoa_unsigned(unsigned int n);
char	*ft_itoa(int n);
int		ft_printf(const char *s, ...);
char	*ft_itoa_base_min(int n, int base);
int		ft_handle_c(const char *c);
int		ft_handle_d(int num);
int		ft_handle_i(int num);
int		ft_handle_p(void *ptr);
int		ft_handle_percent(char c);
int		ft_handle_s(char *str);
int		ft_handle_u(unsigned int num);
int		ft_handle_x(int num);
int		ft_handle_xmaj(int num);
void	ft_putchar(const char *s);
void	ft_putstr(char *str);
int		ft_strlen(const char *str);
#endif