/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:59:11 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/09/28 17:00:49 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const*s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end -1] && ft_strchr(set, s1[end -1]))
			end--;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (str)
			ft_strlcpy(str, &s1[start], end - start + 1);
	}
	return (str);
}

int	main(void)
{
	printf("%s", ft_strtrim("abqbc", "abc"));
	return (0);
}
