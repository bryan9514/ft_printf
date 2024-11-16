/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:50:51 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/16 12:39:45 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

{}
while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			type = ft_identify_type (str, i);
			if (type == 1){
				int contn = va_arg(args, int);
				ft_putnbr(contn);
			}
			if (type == 2){
				char	*contn = va_arg(args, char *);
				ft_putstr(contn);
			}
			if (type == 3){

			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar ('\n');
}

void	ft_printf(const char *str, ...)
{
	int	i;
	int	cont;
	va_list	args;
	va_start(args, str);

	i = 0;
	cont =0;
	while ( )

	va_end(args);
}

int	main(void)
{
	ft_printf("Hola %s, tienes %d mensajes.", "Bryan", 5);
	return (0);
}
