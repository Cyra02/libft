/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:29:49 by ciestrad          #+#    #+#             */
/*   Updated: 2023/09/20 12:52:01 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{	
	void	*i;

	i = malloc(count * size);
	if (i == NULL)
		return (NULL);
	ft_bzero(i, count * size);
	return (i);
}
