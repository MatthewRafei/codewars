#include <stdlib.h>
#include <stddef.h>

int **pyramid (unsigned n)
{
    // 4-8 bytes * number of arrays?
    int **res = malloc(sizeof(int) * n);

    int inner_array[] = {};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            inner_array[i] = j;
        }
        res[i] = inner_array;
    }

	return NULL;
}

void free_pyramid (unsigned n, int *pyramid_array[n])
{
	// do your memory de-allocation here
}

int main(void) {

    pyramid(3);



    return 0;
}
