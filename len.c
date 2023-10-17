#include <stdio.h>

/**
 * my_strlen - Calculate the length of a string and print its characters
 * @s: A pointer to a string
 * Return: The length of the string
 */
int my_strlen(char *s)
{
    int count = 0;

    for (; s[count] != '\0'; count++)
        putchar(s[count]);

    return count;
}

int main()
{
    char myString[] = "Hello, World!";
    int length = my_strlen(myString);

    printf("\nLength of the string: %d\n", length);

    return 0;
}
