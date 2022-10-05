/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:00:43 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/10/05 17:05:38 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst: Le début de la liste.
Valeur de retour : Dernier élément de la liste
Renvoie le dernier élément de la liste.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	while (last)
	{
		if (!(last->next))
			return (last);
		last = last->next;
	}
	return (last);
}
