#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: string to be appended on
 * @src: string to append to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, const char *src) {
    char *ptr = dest;

    while (*ptr != '\0') {
        ptr++;
    }
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    
    return dest;
}
