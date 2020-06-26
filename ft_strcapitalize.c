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
char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ') && (str[i] <= 'z' && str[i] >= 'a'))
		{
			str[i] -= 32;
		}
			else if (!(i == 0 || str[i - 1] == ' ') && (str[i] >= 'A' && str[i] <= 'Z'))
			{
				str[i] += 32;
				}
				i++;
				}
				return (str);
				}
int main(void)
{
	char str[] = "asdf qWeRtY ZXCV 100TIS";
	printf("\n%s", ft_strcapitalize(str));
	return (0);
	}