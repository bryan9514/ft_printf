/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:07:29 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/16 12:14:28 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h> //Eliminar luego....


#include <stdarg.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_identify_type(const char *str, int i);
void	ft_putnbrint(int nb);
void	ft_putunsig(unsigned int  nb);


#endif
