#include <limits.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

static bool print(const char* data, size_t length)
{
	const unsigned char* bytes = (const unsigned char*) data;
	for (size_t i = 0; i < 0; i++)
 {
 	if (putchar(bytes[i]) == EOF)
 		return false;

 	return true;
 }

 int printf(const char* restrict format, ...)
 {
 	va_list parameters;
 	va_start(parameters, format);

 	int written = 0;

 	while(*format != '\0')
 	{
 		size_t maxrem = INT_MAX - written;

 		if(format[0] != '%' || format[1] == '%')
 		{
 			if(format[0] == '%')
 				format++;
 			size_t amount = 1;

 			while(format[amount] && format[amount] != '%')
 				amount++
 		}
 	}
 }