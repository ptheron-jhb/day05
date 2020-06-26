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
void ft_putchar(char c)
{
write(1,&c,1);
}
char *ft_strcpy(char *dest, char *src)
{ 
int i; i=0; while(src[i] != '\0') 
{ dest[i]=src[i]; i++; }
dest[i] = '\0';
return (dest);
}
int main(void)
{
	char dest[]="test";
	char src[]="test";
	printf("%s\n",ft_strcpy(dest,src));
	return(0);
	}