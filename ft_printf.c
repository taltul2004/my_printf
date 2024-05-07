/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:06:16 by tczapnic          #+#    #+#             */
/*   Updated: 2024/05/03 09:49:58 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_type(const char *input, void *arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i = i + ft_putchar((int)arg);
	else if (*input == 's')
		i = i + ft_putstr((char *)arg);
	else if (*input == 'd')
		i = i + ft_putnbr((int)arg);
	else if (*input == 'i')
		i = i + ft_putnbr((int)arg);
	else if (*input == 'u')
		i = i + ft_putunbr((unsigned int)arg);
	else if (*input == 'p')
		i = i + ft_hexptr((unsigned long)arg);
	else if (*input == 'x')
		i = i + ft_puthex((unsigned int)arg, 1);
	else if (*input == 'X')
		i = i + ft_puthex((unsigned int)arg, -1);
	return (i);
}

static int	error_check(void *args)
{
	va_end(args);
	return (-1);
}

int	ft_printf(const char *input, ...)
{
	va_list			args;
	unsigned int	i;
	int				ret;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (ft_strchr("cspdiuxX", *input))
				ret = check_type(input, va_arg(args, void *));
			else if (*input == '%')
				ret = ft_putchar('%');
		}
		else
			ret = ft_putchar(*input);
		if (ret == -1)
			return (error_check(args));
		i += ret;
		input++;
	}
	va_end(args);
	return (i);
}
/*
#include <stdio.h>
int main()
{
    char c = 'a';
    int b = -4533;
    char *ptr = "hell";
	int result;
	int myresult;

    myresult = ft_printf("the number is |%u|\n the char is
    |%c|\n and the string is |%p|\n and the
    hex of 42 is |%x|\n", b, c, (void *)-14523, b);
	result = printf("the number is |%u|\n the char is
 |%c|\n and the string is |%p|\n and the
 hex of 42 is |%x|\n", b, c, (void *)-14523, b);
	printf("\nreal result is |%d| and my result is |%d|", result, myresult);
}
*/
