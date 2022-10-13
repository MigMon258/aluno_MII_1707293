#include <stdio.h>
int main(){
 long c_lidos=0;
 int c;
 scanf("%d",&c);
 while(c!= -1){
 scanf("%d",&c);
 c_lidos++; // abrevia c_lidos = c_lidos+1;
 }
 printf("\n Foram lidos %ld caracteres!",c_lidos);
 return 0;
}
