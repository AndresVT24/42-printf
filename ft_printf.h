/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervillca <ervillca@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:13:30 by ervillca          #+#    #+#             */
/*   Updated: 2026/05/02 20:14:01 by ervillca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

//ft_check_sign.c
int check_sign(char opt, va_list *args);

//ft_printf_utils.c

//ft_sum_str.c
int	ft_putchar_sum(char c);
int	ft_putstr_sum(char *s);
int ft_putnbr_sum(int num);
int ft_putptr_sum(void *ptr);

//ft_printf.c
int ft_printf(char const *format, ...);

#endif