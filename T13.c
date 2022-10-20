#include <stdio.h>
#define FIM '0'
#define e "2.71"
int main()
{
 printf(e);
 printf("\n 1-Opção ");
 printf("\n 2-Opção ");
 printf("\n 0-Sair ");
 int op;
 do
 {
    if(op==10)
    {
        printf("\n 1-Opção ");
        printf("\n 2-Opção ");
        printf("\n 0-Sair " );
    }
    op=getchar();
    switch(op)
    {
        case '1': printf("Opção 1\n");
        break;
        case '2': printf("Opção 2\n");
        break;
        case FIM: printf("Pediu para terminar\n");
        break;
        case 10: printf("\n");
        break;
        default: printf("Opçao inválida\n");
        break;
    }
 }
 while(op!=FIM);
 return 0;
}
