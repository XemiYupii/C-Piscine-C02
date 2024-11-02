/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:49:40 by gzamora-          #+#    #+#             */
/*   Updated: 2024/10/27 23:35:10 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_print_word(char *src);

int	main(void)
{
	char	word[5];
	char	copy_word[5];

	word[0] = 'h';
	word[1] = 'o';
	word[2] = 'l';
	word[3] = 'a';
	word[4] = '\0';
	ft_strcpy(copy_word, word);
	ft_print_word(copy_word);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_print_word(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		write(1, &src[i], 1);
		i ++;
	}
}
