/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testchar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:08:53 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/14 18:00:35 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	printf("\n%d\n", printf("oul%s    % yyyyyyyyyy", "aoui"));
	write(1, "\n", 1);
	// printf("\n%d\n", ft_printf("oul%s    % yyyyyyyyyy", "aoui"));
}
// void	strtest(int n, ...)
// {
// 	va_list args;
// 	int i;
// 	void *cont;
// 	va_start(args, n);

// 	i = 0;
// 	while (i <= n)
// 	{
// 		cont = va_args(args, ft_ifd();
// 		printf("El caracter actual es : %s\n", cont);
// 		i++;
// 	}
// 	va_end(args)
// }

// int	main(void)
// {
// 	char	str[]= {'h', 'e', 'l'};

// 	strtest(&str);
// 	printf ("El str es : %s\n", str);
// 	return(0);
// }
