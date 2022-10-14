/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:53:20 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/09/30 19:07:22 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* count_words: con i recorre el string hasta encontrarse con c(=espacio) y va 
aumentado word cada vez que se encuentra con un espacio.
word_sep: pinta la cadena propia de cada palabra */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

static char	*word_sep(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start +1));
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_sep(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/*int	main(void)
{
	char	str[] = "hello how are you sweetie?";
	char	**word_split;
	char	c = ' ';
	word_split = ft_split(str, c);
	printf("%s\n", word_split[0]);
	printf("%s\n", word_split[1]);
	printf("%s\n", word_split[2]);
	printf("%s\n", word_split[3]);
	printf("%s\n", word_split[4]);
	return (0);
}*/
