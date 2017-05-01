#include <stdio.h>
#include <conio.h>
int main (){
    int x[2][4]={{2,3,5,7},{1,1,4,4}},b,k;
    for(b=0;b<2;b++)
    for(k=0;k<4;k++)
    printf("x[%d][%d] = %d\n",b,k,x[b][k]);
    for(b=0;b<2;b++)
    for(k=0;k<4;k++)
    {//gotoxy(20+(k+1)*2,b+1);
    printf("%d",x[b][k]);
    }
 getch();}
