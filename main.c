/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ervillca <ervillca@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:49:19 by ervillca          #+#    #+#             */
/*   Updated: 2026/05/06 09:12:49 by ervillca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
    int o_ret; // Return original
    int m_ret; // Return mio (ft_printf)

    printf("\n======================================================\n");
    printf("                   PRUEBAS FT_PRINTF                   \n");
    printf("======================================================\n\n");

    // --- CARACTERES ---
    printf("--- [ %%c ] ---\n");
    o_ret =    printf("Orig: %c, %c, %c\n", 'A', '0', ' ');
    m_ret = ft_printf("Mine: %c, %c, %c\n", 'A', '0', ' ');
    printf("-> Retornos: Orig = %d | Mine = %d\n\n", o_ret, m_ret);

	// --- STRINGS ---
    printf("--- [ %%s ] ---\n");
    char *null_str = NULL;
    o_ret =    printf("Orig: %s | %s | %s\n", "Hola 42", "", null_str);
    m_ret = ft_printf("Mine: %s | %s | %s\n", "Hola 42", "", null_str);
    printf("-> Retornos: Orig = %d | Mine = %d\n\n", o_ret, m_ret);

    // --- PUNTEROS ---
    printf("--- [ %%p ] ---\n");
    char c = 'z';
    void *ptr = &c;
    o_ret =    printf("Orig: %p | %p\n", ptr, NULL);
    m_ret = ft_printf("Mine: %p | %p\n", ptr, NULL);
    printf("-> Retornos: Orig = %d | Mine = %d\n\n", o_ret, m_ret);

    // --- ENTEROS (Base 10) ---
    printf("--- [ %%d e %%i ] ---\n");
    o_ret =    printf("Orig: %d | %d | %d | %d | %i\n", 0, 42, -42, INT_MAX, INT_MIN);
    m_ret = ft_printf("Mine: %d | %d | %d | %d | %i\n", 0, 42, -42, INT_MAX, INT_MIN);
    printf("-> Retornos: Orig = %d | Mine = %d\n\n", o_ret, m_ret);

    // --- UNSIGNED ENTEROS ---
    printf("--- [ %%u ] ---\n");
    o_ret =    printf("Orig: %u | %u | %u\n", 0, 42, UINT_MAX);
    m_ret = ft_printf("Mine: %u | %u | %u\n", 0, 42, UINT_MAX);
    printf("-> Retornos: Orig = %d | Mine = %d\n\n", o_ret, m_ret);

    // --- HEXADECIMALES (Minúsculas y Mayúsculas) ---
    printf("--- [ %%x e %%X ] ---\n");
    o_ret =    printf("Orig: %x | %X | %x | %X\n", 0, 0, 255, 255);
    m_ret = ft_printf("Mine: %x | %X | %x | %X\n", 0, 0, 255, 255);
    printf("-> Retornos: Orig = %d | Mine = %d\n\n", o_ret, m_ret);

    // --- PORCENTAJE ---
    printf("--- [ %%%% ] ---\n");
    o_ret =    printf("Orig: %%\n");
    m_ret = ft_printf("Mine: %%\n");
    printf("-> Retornos: Orig = %d | Mine = %d\n\n", o_ret, m_ret);

    // --- MIXTO ---
    printf("--- [ MIXTO ] ---\n");
    o_ret =    printf("Orig: %s %c %d %x %%\n", "Test", 'X', -99, 15);
    m_ret = ft_printf("Mine: %s %c %d %x %%\n", "Test", 'X', -99, 15);
    printf("-> Retornos: Orig = %d | Mine = %d\n\n", o_ret, m_ret);
    
    return (0);
}
