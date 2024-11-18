/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:07:29 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/18 21:47:50 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h> //Eliminar luego....


#include <stdarg.h>
#include <unistd.h>
#include <limits.h> 

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int ft_identify_type(va_list args, const char c);
int	ft_putnbrint(int nb);
int	ft_putunsig(unsigned int  nb);
int	ft_puthexa_lowercase(unsigned int);
int	ft_puthexa_uppercase(unsigned int nb);
int	ft_putpointer(void *ptr);

#endif
