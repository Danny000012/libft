/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 15:26:34 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/09 15:32:57 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
