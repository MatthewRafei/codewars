#include <stdlib.h>
#include <stdio.h>

/* Note:
    should also save the length of the parts_sums in <len>
*/

unsigned long long *parts_sums(size_t *len, const unsigned long long *ls, size_t n)
{

    //printf("what is %d\n", (int)ls[0]);

    unsigned long long *ls2 = malloc(sizeof(unsigned long long) * n);

    for(int i = 0; i < n - 1; i++) {
        printf("What is ls[i] : %d\n", (int)ls[i]);
        for(int j = 0; j < 1; j++) {
            printf("What is ls[j] : %d\n", (int)ls[j]);
        }
        printf("\n");
    }

    ls2[n] = 0;

    *len = 0;
    return NULL;
}

int main(void) {

    size_t len;
    const unsigned long long ls[7] = {21, 20, 18, 15, 11, 6, 0};
    size_t n = sizeof(ls)/sizeof(*ls);

    parts_sums(&len, ls, n);

    return 0;
}
