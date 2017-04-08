#include <stdio.h>
#include <conio.h>
int main () {
    int k,y;
    printf("Masukan bilangan = ");scanf("%d",&k);
    y=k%11;
    if (y==0)
       printf("%d adalah bilangan kelipatan 11",k);
    else 
       printf("%d bukan bilangan kelipatan 11",k);
    getch();
}
    
