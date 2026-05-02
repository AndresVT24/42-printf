/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervillca <ervillca@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:13:30 by ervillca          #+#    #+#             */
/*   Updated: 2026/05/02 21:01:25 by ervillca         ###   ########.fr       */
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
int ft_putnbru_sum(unsigned int n);
int ft_putnbrhex_sum(int n);

//ft_printf.c
int ft_printf(char const *format, ...);

#endif