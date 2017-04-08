#include <stdio.h>
#include <conio.h>
int main () {
    int k,y;
    printf("Masukan Bilangan = ");scanf("%d",&k);
    y=k%2;
    if (y>0)
       printf("%d adalah bilangan ganjil",k);
    else
       printf("%d adalah bilangan genap",k);
    getch();
}
