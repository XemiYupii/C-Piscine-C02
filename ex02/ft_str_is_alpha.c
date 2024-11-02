/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:38:43 by gzamora-          #+#    #+#             */
/*   Updated: 2024/10/28 03:37:56 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int	alpha;
	//char	word[5];
	char	word2[4];
	char	char_alpha;

	//word[0] = 'h';
	//word[1] = 'o';
	//word[2] = 'L';
	//word[3] = 'a';
	//word[4] = '\0';
	word2[0] = 'a';
	word2[1] = '2';
	word2[2] = 'C';
	word2[3] = '\0';
	//alpha = ft_str_is_alpha(word);
	//char_alpha = alpha + '0';
	alpha = ft_str_is_alpha(word2);
	char_alpha = alpha + '0';
	write(1, &char_alpha, 1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i] != '\0' && is_alpha == 1)
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			is_alpha = 0;
		i ++;
	}
	return (is_alpha);
}
