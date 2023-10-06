/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:41:34 by ciestrad          #+#    #+#             */
/*   Updated: 2023/09/18 10:32:45 by ciestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_tolower(int a)
{
	int	num;

	num = 0;
	if (a >= 65 && a <= 90)
	{
		num = a + 32;
		return (num);
	}
	return (a);
}

/*int main(void)
{
	printf("%c", ft_tolower('A'));
	return (0);
}*/
