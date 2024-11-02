/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:42:53 by gzamora-          #+#    #+#             */
/*   Updated: 2024/11/01 03:53:53 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int	num, num2, num3, num4 = 0;
	char	word[] = {"PAPALLONA"};
	char	word2[] = {"Pampallugues"};
	char	word3[] = {"123"};
	char	word4[] = {""};

	num = ft_str_is_uppercase(word);
	num2 = ft_str_is_uppercase(word2);
	num3 = ft_str_is_uppercase(word3);
	num4 = ft_str_is_uppercase(word4);
	printf("%d %d %d %d", num, num2, num3, num4);
	return (0);
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
