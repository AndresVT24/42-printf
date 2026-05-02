/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervillca <ervillca@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:15:02 by ervillca          #+#    #+#             */
/*   Updated: 2026/05/02 19:55:15 by ervillca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(char const *format, ...)
{
    va_list args;
    int i;
    int count;

    if(!format)
        return (-1);
    count = 0;
    i = 0;
    va_start(args, format);    
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            count += check_sign(format[i + 1], &args);
            i ++;
        }
        else
            count += ft_putchar_sum(format[i]);
        i++;
    }
    va_end(args);
    return(count);
}