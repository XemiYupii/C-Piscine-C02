/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gzamora- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:03:16 by gzamora-          #+#    #+#             */
/*   Updated: 2024/11/01 16:47:17 by gzamora-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	is_alphanumeric(char c);

int	main(void)

{
	char	word[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};

	ft_strcapitalize(word);
	for (int i = 0; word[i] != '\0'; i++)
		printf("%c", word[i]);
	return (0);
}
*/
int	is_alphanumeric(char c)
{
	int	is_upper;
	int	is_lower;
	int	is_digit;

	is_upper = (c >= 'A' && c <= 'Z');
	is_digit = (c >= '0' && c <= '9');
	is_lower = (c >= 'a' && c <= 'z');
	return (is_upper || is_lower || is_digit);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
