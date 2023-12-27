/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:54:15 by arabelo-          #+#    #+#             */
/*   Updated: 2023/12/27 20:16:50 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrays.h"

/// @brief This function appends the integers given as parameters
/// to the array.
/// @param array 
/// @param num_of_elements 
/// @param  
/// @return 
size_t	push(size_t num_of_elements, ...)
{
	Array	*array;
	va_list args;
	int		value;

	array = (Array *)this();
	va_start(args, num_of_elements);
	while (num_of_elements--)
	{
		value = va_arg(args, int);
		if (array->len == array->capacity)
		{
			array->capacity *= 2;
			array->array = (int *)realloc(array->array, array->capacity * sizeof(int));
			if (!array->array)
			{
				malloc_error();
				array->method_error = true;
				return (0);
			}
		}
		array->array[array->len++] = value;
	}
	va_end(args);
	return (array->len);
}

int		pop(void)
{
	Array	*array;
	int		last_elem;

	array = (Array *)this();
	if (array->len == 0)
	{
		array->method_error = true;
		return (0);
	}
	last_elem = array->array[array->len - 1];
	array->array = realloc(array->array, sizeof(int) * (array->len - 1));
	if (!array->array)
	{
		malloc_error();
		array->method_error = true;
		return (0);
	}
	array->len -= 1;
	return (last_elem);
}

/// @brief This function displays all integers
/// of the instantiated array.
/// @param  
void	show(void)
{
	Array	*array;
	size_t	len;

	array = (Array *)this();
	len = 0;
	if (len == array->len)
		return ;
	printf("[");
	while (len < array->len)
	{
		if (len + 1 == array->len)
			printf("%i]\n", array->array[len]);
		else
			printf("%i, ", array->array[len]);
		len++;
	}
}

/// @brief This function returns the reference
/// of an array instance, if the parameter is
/// not NULL it sets the new reference to the
/// given parameter reference and returns it.
/// @param array 
/// @return 
void	*array_ref(Array *array, bool reset)
{
	static void	*ref;

	if (!array && !reset)
		return (ref);
	ref = (void *)array;
	return (ref);
}

/// @brief This function returns the reference of
/// the instance saved at array_ref function.
void	*this(void)
{
	return (array_ref(NULL, false));
}
