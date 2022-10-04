/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:30:25 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/10/04 18:17:34 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

void	ft_print_result2(int n)
{
	char c;

	if (n >= 10)
		ft_print_result2(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int main(int argc, const char *argv[])
{
	t_list		*elem;
	int			arg;

	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char	str [] = "lorem ipsum dolor sit";

		if (!(elem = ft_lstnew(str)))
			ft_print_result("NULL");
		else
		{
			if (!(elem->content))
				ft_print_result("NULL");
			else
				ft_print_result(elem->content);
		}
	}
	else if (arg == 2)
	{
		int		i;

		i = 42;
		if (!(elem = ft_lstnew(&i)))
				ft_print_result("NULL");
		else
		{
			if (!(elem->content))
				ft_print_result("NULL");
			else
				ft_print_result2(*(int *)(elem->content));
		}
	}
	return (0);
}*/
