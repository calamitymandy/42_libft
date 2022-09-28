/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:30:05 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/09/28 14:11:26 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}

/*int	main(void)
{
	char	s[] = "hello how are you?";
	int	c;

	c = 'o';
	printf("%s", ft_strchr(s, c));
	return (0);
}*/
