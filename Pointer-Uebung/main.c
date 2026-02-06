#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int myNumbers[5] = {10, 20, 30, 40, 50};

    int *pointer1 = myNumbers+2;
    int *pointer2 = myNumbers+5;

    printf("%p    %p\n", pointer1, pointer2);
    int differenz = pointer2 - pointer1;
    printf("%d", differenz);
}