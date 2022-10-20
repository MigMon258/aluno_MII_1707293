#include <stdio.h>
long factorial(int num);
int main(){
 int numero;
 printf("\n CALCULO DO FACTORIAL \n");
 printf("\n Introduza um numero: ");
 printf("\n CALCULO DO FACTORIAL \n");
 scanf("%d",&numero);
 printf("%d!= %ld \n", numero,factorial(numero));
 return 0;
}
long factorial(int num){
 long res=1;
 if(num<0) res=-1;
 for(int val=1; val<=num;val++) // vall ++, abrevia val=val+1;
 res *=val; // abreviatura de, res =res * val;
 return (res);
}
