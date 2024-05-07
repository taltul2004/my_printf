/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tczapnic <tczapnic@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:00:28 by tczapnic          #+#    #+#             */
/*   Updated: 2024/04/26 10:25:05 by tczapnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		temp;
	int		i;

	temp = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		temp = -n;
	i = int_len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (temp == 0)
		str[i] = '0';
	while (temp > 0)
	{
		str[i--] = (temp % 10) + '0';
		temp /= 10;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("the string is %s", ft_itoa(-42));
}
*/
