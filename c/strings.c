#include <stdio.h>

int main(void)
{
    char string[] = "Tyler";

    printf("what is string? %p\n", string);
    printf("what is &string[0]? %p\n", &string[0]);
    printf("Does string[5] == '\\0'? %d\n",string[5] == '\0');

    return 0;
}