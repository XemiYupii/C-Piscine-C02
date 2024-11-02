/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 02:16:08 by gzamora-          #+#    #+#             */
/*   Updated: 2024/11/01 03:54:57 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int	num, num2, num3, num4 = 0;
	char	word[] = {"papallona"};
	char	word2[] = {"Hola"};
	char	word3[] = {"123"};
	char	word4[] = {""};

	num = ft_str_is_lowercase(word);
	num2 = ft_str_is_lowercase(word2);
	num3 = ft_str_is_lowercase(word3);
	num4 = ft_str_is_lowercase(word4);
	printf("%d %d %d %d", num, num2, num3, num4);
	return (0);
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i ++;
	}
	return (1);
}
