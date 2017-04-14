#include <stdio.h>
#include <conio.h>
int main (){
    int k,y,r,i,n,z;
    r=0;i=0;n=0;z=0;
    printf("Masukan bilangan maximum : ");scanf("%d",&k);
    for(y=1;y<=k;y++){
    if(y%2==0)
    {printf("%d=Genap \n",y);
    r++;
    n=n+y;}
    else if(y%2==1)
    {printf("\n%d=Ganjil ",y);
    i++;
    z=z+y;}
}
    printf("\nJumlah bilangan genap =%d\n",r);
    printf("Jumlah bilangan ganjil =%d\n",i);
    printf("Total penjumlahan bilangan genap =%d\n",n);
    printf("Total penjumlahan bilangan ganjil =%d\n",z);
getch();
}
    
