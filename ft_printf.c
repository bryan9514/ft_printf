/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:50:51 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/14 18:12:27 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *str, ...)
{
	int	i;
	va_list	args;
	va_start(args, str);

	while (str)
	{
		if(str[i] != '%')
			ft_putchar(str[i]);
		else
			identify_type(str[i])
		i++;		
	}
	va_end(args);
}

int	main(void)
{
	ft_printf("Hola %s, tienes %s mensajes.", "Bryan", "five");
	return (0);
}
