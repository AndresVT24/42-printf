/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervillca <ervillca@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:49:19 by ervillca          #+#    #+#             */
/*   Updated: 2026/05/02 20:33:06 by ervillca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    ft_printf("char: %c\n", 'A');
    ft_printf("str: %s\n", "hola");
    ft_printf("num: %d\n", -42);
    ft_printf("int: %i\n", 42);
    ft_printf("percent: %%\n");
    return (0);
}