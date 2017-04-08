#include <stdio.h>
#include <conio.h>
int main (){
    int i,x,y,p;
    p=0;
    i=1;
    printf("masukan jumlah bintang: ");scanf("%d",&y);
    while(i<=y){
    for(x=1;x<=i;x++){
    printf("* ");
    }
    printf("\n");
    if(i==y && p==0) p=1;
    if(p==0) i++;else i--;
    if(i==0)break;
    }
    printf("\n");
getch();
}
