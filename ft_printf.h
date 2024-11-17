/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:07:29 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/17 12:58:44 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h> //Eliminar luego....


#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int ft_identify_type(va_list args, const char c);
int	ft_putnbrint(int nb);
int	ft_putunsig(unsigned int  nb);
int	ft_puthexa_lowercase(int nb);

#endif
