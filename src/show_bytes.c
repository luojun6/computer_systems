#include <stdio.h>
#include <stdlib.h>

// unsigned char -> general point type
typedef unsigned char *pointer; 

void show_bytes(pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
        // %p -> print pointer
        // %x: print hexadecimal
        printf("%p\t0x%.2x\n", start + i, start[i]);
    printf("\n");
}

int main(int argc, char **argv)
{
    int a = 15213;
    printf("int a = 15213; \n");
    show_bytes((pointer) &a, sizeof(int));

    return 0;
}

