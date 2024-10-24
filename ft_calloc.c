/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/16 13:03:34 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/24 18:09:34 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	temp = malloc (nmemb * size);
	if (!temp)
		return (NULL);
	while (i < nmemb * size)
		temp[i++] = 0;
	return (temp);
}
