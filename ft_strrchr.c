/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/09 14:03:50 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:12:24 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*p;
	unsigned int	i;
	char			l;

	l = (char) c;
	p = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == l)
			p = (char *) &s[i];
		i++;
	}
	if (l == '\0')
		p = (char *) &s[i];
	return (p);
}

// int main()
// {
//  printf("%s\n", ft_strrchr("12a34512345", '1'));
//  printf("%s\n", strrchr("12a34512345", '1'));
// }