#include <stdio.h>
#include <conio.h>
int main(){
    int bil[7],i;
    printf("elemen 1 ? ");scanf("%d",&bil[0]);
    bil[1]=5;
    bil[2]=bil[1] + 20;
    for(i=4;i<7;i++) bil[i]=i*10;
    bil[3]=bil[bil[1]];
    bil[0]=100;
    for(i=0;i<7;i++) printf("bil[%d] = %d\n",i,bil[i]);
    getch();
}