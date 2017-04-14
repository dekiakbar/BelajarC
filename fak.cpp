#include <stdio.h>
#include <conio.h>
int main(){
int k;
unsigned long int y,r;
    k,y=1;
    printf("Masukan bilangan faktorial: ");scanf("%d",&k);
    printf("%d! =",k);
    for(r=k;r>=1;r--){
     if(r==k)
     {printf("%ld x ",r);}
     else if(r>1)
     {printf("%ld x ",r);}
     else
     {printf("%ld",r);}
     y=y*r;}
     printf("\nFaktorial dari %ld = %ld\n",k,y);
     getch();
     }
   
