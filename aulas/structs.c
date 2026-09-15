#include <stdio.h>
#include <stdlib.h>

float trapezio(float (*f)(float), float a, float b, int n){
    float x, h, area;
    int i;
    h = (b - a) / n;
    area = 0;
    x = a + h;
    for(i = 1; i < n; i++){
        area = area + f(x);
        x = x + h;
    }
    area = area + (f(a) + f(b)) / 2;
    area = area * h;
    return area;
}

float func(float x){ return exp(x);}

int main(void){
    float a = 0, b = 1;
    int n = 1000;
    float area = trapezio(func, a, b, n);
    printf("area = %f\n", area);
    return 0;
}







/*int funcao(int a){
    return a+1;
}

int alo(int (*f)(int)){
    printf("ret = %d\n", f(3));
}

int main(void){
    alo(funcao);
}
                                                             
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
*/