#include "main.h"
#include <stdio.h>

/**
 *_atoi - takes strings of numbers an puts them in a int
 *
 *@s: stores string
 * Return: int value of string text
 */
int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    int i = 0;

    while (s[i] != '\0' && (s[i] < '0' || s[i] > '9')) {
        if (s[i] == '-') {
            sign = -sign;
        }
        i++;
    }

  
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';
        
   
        if (result > (2147483647 - digit) / 10) {
          
            return (sign == 1) ? 2147483647 : -2147483648;
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}
