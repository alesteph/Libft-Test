/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesteph <alesteph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:19:21 by alesteph          #+#    #+#             */
/*   Updated: 2018/11/06 17:58:58 by alesteph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	str[5] = "test";
	char	str2[6] = "*---*";

	printf("strlen = %lu ft_strlen = %lu\n", strlen("test"), ft_strlen("test"));
	printf("strdup = %s ft_strdup = %s\n", strdup("Test de copie"), ft_strdup("Test de copie"));
	printf("strcpy = %s ft_strcpy = %s\n", strcpy(str2, str), ft_strcpy(str2, str));

	char    str3[5] = "test";
	char    str4[6] = "*---*";

	printf("strncpy = %s ft_strncpy = %s\n", strncpy(str4, str3, 3), ft_strncpy(str4, str3, 3));
	return (0);
}
