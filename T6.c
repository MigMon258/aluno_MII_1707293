#include <stdio.h>

int main()
{
    int x1, x2;
    printf("Introduza um inteiro, x1:");
    scanf("%d",&x1);
    printf("\nIntroduza um inteiro, x2:");
    scanf("%d",&x2);
    if(x1<x2){
            printf("x2 é maior que x1");
    }
    else{
        if(x1==x2){
            printf("x1 é igual a x2");
        }
        else{
            printf("x1 é maior que x2");
        }
    }
    return 0;
}