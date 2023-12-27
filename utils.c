/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:20:21 by arabelo-          #+#    #+#             */
/*   Updated: 2023/12/27 20:14:29 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrays.h"

/// @brief This function initializes an array by
/// allocating memory at the heap.
/// @param  
/// @return 
Array	*init_array(void)
{
	Array	*array;

	array = (Array *)malloc(sizeof(Array));
	if (!array)
		return (NULL);
	array->capacity = 1;
	array->array = (int *)malloc(sizeof(int) * array->capacity);
	if (!array->array)
		return (NULL);
	array->len = 0;
	array_ref(array, false);
	array->push = &push;
	array->show = &show;
	array->pop = &pop;
	array->method_error = false;
	return (array);
}

/// @brief This function calculates the length of
/// the given string and returns it.
/// @param str 
/// @return 
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

/// @brief This function deallocates the array and
/// sets the value stored by array_ref to NULL.
/// @param array 
void	free_array(Array *array)
{
	free(array->array);
	free(array);
	array_ref(NULL, true);
}
