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
char ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int x;
	i = 0;
	x = 0;
if (s1[0] == '\0')
	return (s1[0] - s2[0]);
if (s2[0] == '\0')
	return (s1[0] - s2[0]);
while (s1[++i]<=n)
{
	if (s1[i] != s2[i])
		break;
	x++;
	i++;
	}
	if (s1[x] == s2[x])
		return(0);
	if (s1[x] > s2[x])
		return (s1[x] - s2[x]);
	if (s1[x] < s2[x])
		return (s1[x] - s2[x]);
	}
	int main() 
	{
	char str[] = "ab";
	char to_find[] = "abcd";
	int n=5;
	printf("%d", ft_strncmp(str, to_find,n));
	return(0);
	}