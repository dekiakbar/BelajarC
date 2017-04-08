#include <stdio.h>
#include <conio.h>
int main(){
    int k,y,t;
    printf("Masukan bilangan pertama = ");scanf("%d",&k);
    printf("Masukan bilangan kedua = ");scanf("%d",&y);
    printf("Masukan bilangan ketiga = ");scanf("%d",&t);
    if (k>y && k>t )
    printf("%d",k);
    else if (y>k && y>t)
    printf("%d",y);
    else if (t>k && t>y)
    printf("%d ",t);
    getch ();
}
    
