/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:44:29 by gzamora-          #+#    #+#             */
/*   Updated: 2024/10/28 04:10:21 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	is_numeric(char n);

int	main(void)
{
	char	num[3];
	int	numeric;
	char	char_numeric;

	num[0] = '1';
	num[1] = 'a';
	num[2] = '2';
	numeric = ft_str_is_numeric(num);
	char_numeric = numeric + '0';
	write(1, &char_numeric, 1);
	return (0);
}

int	is_numeric(char n)
{
	return (n >= '0' && n <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_number;

	i = 0;
	is_number = 1;
	if (str[i] == '\0')
		return (is_number);
	while (str[i] != '\0' && is_number == 1)
	{
		if (!is_numeric(str[i]))
			is_number = 0;
		i ++;
	}
	return (is_number);
}
