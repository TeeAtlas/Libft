/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:11:05 by taboterm          #+#    #+#             */
/*   Updated: 2022/06/15 15:53:31 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*The memcpy() function copies n bytes from the object pointed to by src 
into the object pointed to by dst. If copying takes place between objects that 
overlap, the behavior is undefined. Returns original valie of dst.
Param #1 destination
Param #2 source
Return value  void*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	while (n-- > 0)
	{
		*(ptr1++) = *(ptr2++);
	}
	return (dst);
}

// int main(void)
// {
// 	char src[50] = "hello world";
// 	char dst[50] = "goodbye world";
// 	printf("%s\n", ft_memcpy(dst + 7, src + 3, 4));
// 	return (0);
// }
