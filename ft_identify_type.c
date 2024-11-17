/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_identify_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:02:14 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/16 15:37:16 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_identify_type(const char *str, int i)
// {
// 	if (str[i] == 'd')
// 		return (1);
// 	else if (str[i] == 's')
// 		return (2);
// 	else if (str[i] == 'i')
// 		return (3);
// 	return (0);
// }

int	ft_identify_type(const char *str, int i)
{
	int	counter;
	va_list	args;
	va_start(args, str);

	if (str[i] == 'd' || str[i] == 'i')
		counter = ft_putnbrint(va_arg(args, int));
	if (str[i] == 's')
		counter = ft_putstr(va_arg(args, char *));
	// if (str[i] == 'x')
	// 	counter = ft_
	va_end(args)
	return (counter);
}
