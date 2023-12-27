/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:33:08 by arabelo-          #+#    #+#             */
/*   Updated: 2023/12/27 17:38:07 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arrays.h"

/// @brief This function displays an error message about malloc.
/// @param  
void	malloc_error(void)
{
	write(2, MALLOC_ERROR_MESSAGE, ft_strlen(MALLOC_ERROR_MESSAGE));
}
