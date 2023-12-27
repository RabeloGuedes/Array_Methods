/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:14:06 by arabelo-          #+#    #+#             */
/*   Updated: 2023/12/27 20:02:48 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stddef.h>
# include <stdbool.h>
# include <stdarg.h>

# define MALLOC_ERROR_MESSAGE "Error: malloc failed!\n"

typedef struct s_array
{
	size_t	len;
	size_t	capacity;
	int		*array;
	size_t	(*push)(size_t num_of_elements, ...);
	int		(*pop)(void);
	void	(*show)(void);
	bool	method_error;
}			t_array;

typedef t_array Array;

// errors
void	malloc_error(void);
// errors

// methods
void	*this(void);
void	*array_ref(Array *array, bool reset);
void	show(void);
size_t	push(size_t num_of_elements, ...);
int		pop(void);
// methods

// utils
Array	*init_array(void);
size_t	ft_strlen(const char *str);
void	free_array(Array *array);
// utils

#endif
