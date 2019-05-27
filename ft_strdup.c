/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:28:59 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/06 18:23:26 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int len;
	int i;
	char*res;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	res = (char*)malloc(sizeof(char) * (len) + 1);
	if (res == NULL)
		return (0);
	while (str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
