#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,carpimsonuc;
    for (i = 1; i <= 9; i++)
{
    for (j = 1; j <= 9; j++)
    {
        carpimsonuc = i * j;
        printf("%d*%d=%d\n", i, j, carpimsonuc);
    }
    printf("\n");
}

    return 0;
}

