/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitexample.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:21:27 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/09/29 19:22:13 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    count_word(const char *str, char c)
{
    int i;
    int word;

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

static char    *word_dup(const char *str, int start, int finish)
{
    char    *word;
    int        i;

    i = 0;
    word = malloc((finish - start + 1) * sizeof(char));
    while (start < finish)
        word[i++] = str[start++];
    word[i] = '\0';
    return (word);
}

char        **ft_split(char const *s, char c)
{
    size_t    i;
    size_t    j;
    int        index;
    char    **split;

    if (!s || !(split = malloc((count_word(s, c) + 1) * sizeof(char *))))
        return (0);
    i = 0;
    j = 0;
    index = -1;
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && index < 0)
            index = i;
        else if ((s[i] == c || i == strlen(s)) && index >= 0)
        {
            split[j++] = word_dup(s, index, i);
            index = -1;
        }
        i++;
    }
    split[j] = 0;
    return (split);
}

int main(void)
{
    char str[] = " hello there lain bitch ";
    char **ss;
    char c = ' ';
    ss =  ft_split(str,c);
    printf(":%s:\n",ss[0]);
    printf(":%s:\n",ss[1]);
    printf(":%s:\n",ss[2]);
    printf(":%s:\n",ss[3]);
    printf(":%s:\n",ss[4]);
    return (0);
}
