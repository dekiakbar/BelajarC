#include<stdio.h>
#include<conio.h>
 int kelsegitiga(int k,int y){
        int kelsegitiga;
        int luas=k+y+k;
        return luas;}
        
    int main(){
        int k,y;
        printf("masukan sisi= ");scanf("%d",&k);
        y=k;
        int hasil=kelsegitiga(k,y);
        printf("%d",hasil);
        getch();}
