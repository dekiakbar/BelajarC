#include <stdio.h>
#include <conio.h>
int main () {
    int x,y,z;
    z,y=1;
    printf("masukkan bilangan faktorialnya :"); scanf ("%d", &z);
    for (x=1;z<=x;x++){
        if (x==z)
       {printf ("%d",x);}
       else
       {printf("%d Fak ",x);}
     y=y*x;}
     printf("\nFaktorial dari %d = %d\n",z,y);
     getch();
     }
    
    
    
