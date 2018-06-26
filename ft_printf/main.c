/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agoulas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:19:05 by agoulas           #+#    #+#             */
/*   Updated: 2018/06/26 14:43:24 by agoulas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "includes/ft_printf.h"
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	ft_printf("f/%C/\n", 0);
	printf("p/%C/\n", 0);
	ft_printf("f%d\n",ft_printf("f//%hhC/, /%hhC//\n", 0, L'Á±≥'));
	ft_printf("p%d\n",printf("p//%hhC/, /%hhC//\n", 0, L'Á±≥'));
	ft_printf("f%d\n",ft_printf("f//%hhC/, /%hhC//\n", 0, L'米'));
	ft_printf("p%d\n",printf("p//%hhC/, /%hhC//\n", 0, L'米'));
	/*
	wchar_t s[4];
	s[0] = 0x53;
	 s[1] = 0x3abc;
	  s[2] = 0x81000;
	   s[3] = '\0';
	   ft_printf("/%10ls/\n", s);
	   printf("/%10ls/\n`", s);
	ft_printf("/%s/\n", NULL);
	ft_printf("test %-7C %007d%-10.2ls!!\n", 0xd777, 0x45, L"〻");
	ft_printf("toto et /%02u/ coco /%-5lu/ mimi\n", 19, (unsigned long)-20);
	ft_printf("hello ca/%----4c/ /%1c/ va /%10c%-c/ ??\n", '\0', '\n', (char)564, 0);
	printf("hello ca/%----4c/ /%1c/ va /%10c%-c/ ??\n", '\0', '\n', (char)564, 0);
	ft_printf("/%####0000 33..1d/\n", 256);
	ft_printf("/%###-#0000 33...12..#0+0d/\n", 256);
	ft_printf("coco et /%-#-#--24O/ titi/%#012o/\n", 12, -874);
	ft_printf("/%C/\n", 0x6f);
ft_printf("test%-8p/ /%---32p/ /%#5.3x//%#024X/\n", 0x7fff5f7807c4,  0x7fff5f7807c4, 0x25, 0);
	*/
	/*printf("/%C/\n", 0x6f);
	ft_printf("/%8C/ et coco /%C/ titi /%lc/\n", 3250, 0x11ffff, 'a');
	printf("/%8C/ et coco /%C/ titi /%lc/\n", 3250, 0x11ffff, 'a');
	ft_printf("1/%C/\n", 0xdb02);
	printf("1/%C/\n", 0xdb02);
	*//*
	ft_printf("%-5d", -42);
	ft_printf("\n");
	ft_printf("%%\n");
	ft_printf("%d\n", 42);
	ft_printf("%d%d\n", 42, 41);
	ft_printf("%d%d%d\n", 42, 43, 44);
	ft_printf("%ld\n", 2147483647);
	ft_printf("%lld\n", 9223372036854775807);
	ft_printf("%x\n", 505);
	ft_printf("%X\n", 505);
	ft_printf("%p\n", &ft_printf);
	ft_printf("%20.15d\n", 54321);
	ft_printf("%-10d\n", 3);
	ft_printf("% d\n", 3);
	ft_printf("%+d\n", 3);
	ft_printf("%010d\n", 1);
	ft_printf("%hhd\n", 0);
	ft_printf("%jd\n", 9223372036854775807);
	ft_printf("%zd\n", 4294967295);
	ft_printf("%\n");
	ft_printf("%U\n", 4294967295);
	ft_printf("%u\n", 4294967295);
	ft_printf("%o\n", 40);
	ft_printf("%%#08x\n", 42);
	ft_printf("%x\n", 1000);
	ft_printf("%#X\n", 1000);
	ft_printf("%s\n", NULL);
	ft_printf("%S\n", L"ݗݜशব");
	ft_printf("%s%s\n", "test", "test");
	ft_printf("%s%s%s\n", "test", "test", "test");
	ft_printf("%C\n", 15000);
	*/	
/*
	wchar_t s[4];
	ft_printf("/%-7C/ /%007d//%-10.2ls/!!\n", 0xd777, 0x45, L"〻");
	printf("/%-7C/ /%007d//%-10.2ls/!!\n", 0xd777, 0x45, L"〻");
	s[0] = 0x53;
	s[1] = 0x3abc;
	s[2] = 0x81000;
	s[3] = '\0';
	ft_printf("f/%S/\n", s);
	printf("p/%S/\n", s);
	ft_printf("f/%.3ls/\n", s);
	printf("p/%.3ls/\n", s);
*/	/*ft_printf("f%d \n",ft_printf("f/%---10.5ls/\n", s));
	ft_printf("p%d \n",printf("p/%---10.5ls/\n", s));
	s[0] = 'S';
	s[1] = 256;
	s[2] = 'u';
	s[3] = '\0';
	ft_printf("f%d \n",ft_printf("/%.1ls/\n", s));
	ft_printf("p%d \n",printf("/%.1ls/\n", s));
	s[0] = 0x53;
	s[1] = 0xd800;
	s[2] = 0x81000;
	s[3] = '\0';
	ft_printf("f%d \n",ft_printf("f/%S/\n", s));
	ft_printf("p%d \n",printf("p/%S/\n", s));
	ft_printf("f/%9.6ls/ /%S/\n", s, L"a");
	printf("p/%9.6ls/ /%S/\n", s, L"a");
	*/
	/*ft_printf("/%.4S/\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	printf("/%.4S/\n", L"ÊM-M-^QÊM-^XØ‰∏M-ÂM-^O™ÁM-^L´„M-M-^B");
	s[0] = 0x53;
	s[1] = 0xd800;
	s[2] = 0x81000;
	s[3] = '\0';
	ft_printf("%S\n", s);
	printf("%S\n", s);
	s[0] = 254;
	s[1] = 256;
	s[2] = 'b';
	s[3] = '\0';

	ft_printf("f/%S/\n", s);
	printf("p/%S/\n", s);
	s[0] = '\0';
	s[1] = 256;
	s[2] = 'b';
	s[3] = '\0';
	ft_printf("%S\n", s);
	printf("%S\n", s);
	*/
	ft_printf("f{%5.*s}\n", -5, "42");
	//printf("p{%5.*s}\n", -5, "42");
	/*ft_printf("/%.5p/\n", 0);
	printf("/%.5p/\n", 0);
	ft_printf("/%2.9p/\n", 1234);
	printf("/%2.9p/\n", 1234);
	ft_printf("/{%#-15Z}/\n", 123);
	printf("/{%#-15Z}/\n", 123);
	ft_printf("{/%#05.Z/}\n", 0);
	printf("{/%#05.Z/}\n", 0);
	ft_printf("{/%#5Z/}\n", 0);
	printf("{/%#5Z/}\n", 0);
	ft_printf("/% s/\n",NULL);
	printf("/% s/\n",NULL);
	ft_printf("{%05p}\n", 0);
	printf("{%05p}\n", 0);
	ft_printf("/%.p/, /%.0p/\n", 0, 0);
	printf("/%.p/, /%.0p/\n", 0, 0);
	ft_printf("/%.5p/\n", 0);
	printf("/%.5p/\n", 0);
	ft_printf("/%.2p/\n", 1234);
	printf("/%.2p/\n", 1234);
	ft_printf("{% S}\n", L"(null)");
	printf("{% S}\n", L"(null)");
	printf("{% S}\n", NULL);
	ft_printf("{% S}\n", NULL);
	ft_printf("{% S}\n", L"");
	printf("{% S}\n", L"");
	*//*printf("{%-15p}\n", 0);
	  ft_printf("{%-15p}\n", 0);
	  ft_printf("{%05.Z}\n", 0);
	  printf("{%05.Z}\n", 0);
	  ft_printf("{%.*d}\n", -5, 42);
	  printf("{%.*d}\n", -5, 42);
	  ft_printf("{%05.*d}\n", -15, 42);
	  printf("{%05.*d}\n", -15, 42);
	  ft_printf("/%-5d/\n", -42);
	  printf("/%-5d/\n", -42);
	  ft_printf("/%-.5d/\n", -42);
	  printf("/%-.5d/\n", -42);
	  ft_printf("/%###-#0000 33...12..#0+0d/\n", 256);
	  printf("/%###-#0000 33...12..#0+0d/\n", 256);
	  ft_printf("/%d/\n",ft_printf("|d/%hhC/, /%hhC/f|\n", 0, L'Á±≥'));
	  ft_printf("/%d/\n",printf("|d/%hhC/, /%hhC/f|\n", 0, L'Á±≥'));
	  */
	/*ft_printf("/%5.2S/\n", L"〻");
	printf("/%5.2ls/\n", L"〻");
*/
	return (0);
}

