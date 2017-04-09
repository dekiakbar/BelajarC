#include <stdio.h>
#include <conio.h>
int main(){
int k,y,r;
    k,y=1;
    printf("Masukan bilangan faktorial: ");scanf("%d",&k);
    for(r=1;r<=k;r++){
     if(r==k)
     {printf("%d",r);}
     else
     {printf("%d * ",r);}
     y=y*r;}
     printf("\nFaktorial dari %d = %d\n",k,y);
     getch();
     }
   
