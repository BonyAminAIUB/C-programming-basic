#include <stdio.h>

int main(){
    int a;
    float f;
    char c;
    scanf("%d", &a);
    scanf("%f %c", &f,&c);
    printf("%d\t%.2f\t%c", a,f,c);
    return 0;
}