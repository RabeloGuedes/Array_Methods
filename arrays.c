/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:18:53 by arabelo-          #+#    #+#             */
/*   Updated: 2023/12/27 20:17:28 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrays.h"

int	main(void)
{
	Array	*array;
	int		i;
	int		max_len;

	i = 0;
	max_len = 5;
	array = init_array();
	if (!array)
	{
		malloc_error();
		return (1);
	}
	while (i < max_len)
		array->push(1, i++);
	array->show();
	printf("Removed elemet: %i\n", array->pop());
	array->show();
	free_array(array);
	return (0);
}
