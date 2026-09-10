#include <stdio.h>
#include <stdlib.h>


struct Alo {
    int a;
    int b;
    int c;
};

int main(){
    struct Alo alo, *palo;
    palo = &alo;
    alo.a = 3;
    printf("alo.a = %d\n", alo.a);
    printf("palo->a = %d\n", palo->a);
    printf("(*palo).a = %d\n", (*palo).a);
    
    
    return 0;
}