#include <stdio.h>
int main()
{
 char chr;
 int x;
 printf("Enter a inteiro: ");
 scanf("%d",&x);
 printf("%d\n",x);
 printf("Enter a character: ");
 scanf(" %c",&chr);


 printf("You entered %c,%d.", chr,x);
 return 0;
}