/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:50:51 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/16 15:33:21 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		counter;
	va_list	args;

	va_start(args, str);
	i = 0;
	counter= 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			counter = ft_identify_type(str, i);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (counter);
}

int	main(void)
{
	ft_printf("Hola %s, tienes %d mensajes.", "Bryan", 5);
	return (0);
}
