/* Verify the behavior of inner block */

#include <stdio.h>

int main() {

    int i = 9, j = 3;

    printf("i = %d, j = %d\n", i, j);

    {
	int i = j + 2;
	printf("i = %d, j = %d\n", i, j);
    }

    printf("i = %d, j = %d\n", i, j);
    
}
