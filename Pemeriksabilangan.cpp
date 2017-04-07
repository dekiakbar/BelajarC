#include <stdio.h>
#include <conio.h>
int main (){
    int k,y;
    printf("Masukan bilangan pertama = ");scanf("%d",&k);
    printf("Masukan bilangan kedua = ");scanf("%i",&y);
    if (k==y)
    printf("%d sama besarnya dengan %d",k,y);
    else if (k>y)
    printf("%d lebih besar dari %d",k,y);
    else
    printf("%d lebih kecil dari %d",k,y);
    getch();
}
