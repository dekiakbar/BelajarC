#include <stdio.h>
#include <conio.h>
int main(){
int k,g,p;g=0;p=0;
float t,q;t=0;q=0;
    printf("Masukan Masa =");scanf("%d",&k);
    g=k*1000;
    p=k*10;
    t=k/1000;
    q=k/100;
    printf("%d Gram\n",g);
    printf("%d Pon\n",p);
    printf("%.2f Ton\n",t);
    printf("%.2f Kuintal\n",q);
    getch();}
    
    
