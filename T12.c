#include <stdio.h>
unsigned long factorial(int num);
int main(){
 int numero;
 printf(“\n CALCULO DO FACTORIAL \n”);
 printf(“\n Introduza um numero: ”);
 printf(“\n CALCULO DO FACTORIAL \n”);
 scanf(“%d”,&numero);
 printf(“%d!= %ld \n”, numero,factorial(numero));
 return 0;
}
unsigned long factorial(int num){
 unsigned long res=1;
 for(; num>1;num--)
 res *=num; // abreviatura de, res =res * num;
 return (res);
}
