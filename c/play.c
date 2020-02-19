#include <stdio.h>

int main(void)
{
    int array[] = {1, 2, 3, 4};

    printf("what is array? %p\n", array);
    printf("what is &array[0]? %p\n", &array[0]);
    printf("Are they equal?(1 means yes, 0 means no): %d\n", &array[0] == array);

    return 0;
}