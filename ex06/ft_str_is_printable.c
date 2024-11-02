/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:55:39 by gzamora-          #+#    #+#             */
/*   Updated: 2024/11/01 04:19:45 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int	num, num2 = 0;
	char	word[] = {"hola 4, %."};
	char	word2[] = {""};
	num = ft_str_is_printable(word);
	num2 = ft_str_is_printable(word2);
	printf("%d %d", num, num2);
	return (0);
}
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
