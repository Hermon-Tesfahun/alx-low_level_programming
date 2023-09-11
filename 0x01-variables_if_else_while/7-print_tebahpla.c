#include <stdio.h>

/**
 * main - Print alphabet in reverse
 *
 * Return: 0 if Successful
 */
int main(void)
{
        char alp = 'z';
        int i;

        for (i = 26; i > 0; i--)
        {
                putchar(alp--);
        }
        putchar('\n');
        return (0);
}
