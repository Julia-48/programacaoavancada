#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *myrandom(int n){
    int *r;
    int i;

    r = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        r[i] = rand();
    }

    return r;
}

int main(void){
    int *x;
    int i;

    srand(time(NULL));

    x = myrandom(10);
    printf("x = %p\n", x);
    for (i = 0; i < 10; i++) {
        printf("%d, ", x[i]);
    }
    printf("\n");

    x = (int*) realloc(x, 15 * sizeof(int));
    printf("x = %p\n", x);
    for (i = 0; i < 15; i++) {
        printf("%d, ", x[i]);
    }
    printf("\n");

    

    free(x);
    return 0;
}