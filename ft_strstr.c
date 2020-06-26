/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptheron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:48:50 by ptheron           #+#    #+#             */
/*   Updated: 2020/06/22 11:50:14 by ptheron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
char *ft_strstr(char *str, char *to_find)
{
int i;
int j;
i = 0;
if (*to_find == '\0')
	return (str);
while (str[i] != '\0')
{ j = 0; while (str[i + j] == to_find[j])
{ j++; 
if (to_find[j] == '\0')
	return (&str[i]);
}i++; 
}
return (0);
}