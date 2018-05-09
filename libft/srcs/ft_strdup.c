/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseabel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 15:27:42 by dseabel           #+#    #+#             */
/*   Updated: 2018/05/09 13:47:03 by dseabel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int 		i;
	int 		size;
	char 		*new_string;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	new_string = (char*)malloc(sizeof(*new_string) * (size));
	if (new_string == NULL)
		return (NULL);
	while (i < size)
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
