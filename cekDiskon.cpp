#include <stdio.h>
#include <conio.h>
int main () {
    int k,y;
    printf("Masukan harga Rp. ");scanf("%d",&k);
    if (k<=50000)
    printf("bayar Rp. %d",k);
    else if (k>50000 && k<60000)
    {y=k-(k*25/100);
    printf("bayar Rp. %d",y);}
    else if (k>60000 && k<110000 )
    {y=k-(k*40/100);
    printf("bayar Rp. %d",y);}
    else 
    {y=k-(k*50/100);
    printf("bayar Rp. %d",y);}
    getch();
}
    
