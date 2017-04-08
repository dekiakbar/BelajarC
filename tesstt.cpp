#include<stdio.h>
#include<conio.h>
 int luaspersegi(int k,int y){
        int luaspersegi;
        int luas=k*y;
        return luas;}
        
 int luassegitiga(int k,int y){
        int luassegitiga;
        int luas=(k*y)/2;
        return luas;}
        
 int hitungkeliling(int p,int l){
        int luas;
        luas=2*(p+l);
        return luas;}
        
 int kelsegitiga(int k,int y){
        int kelsegitiga;
        int luas=k+y+k;
        return luas;}
int main(){
    int a;    
    printf("pilih menu:\n 1.Luas Persegi Panjang\n 2.Luas Segitiga\n 3.Keliling Persegi Panjang\n 4.Keliling Segitiga\n\n ==>  ");scanf("%d",&a);
    if (a==1){
        printf("Manghitung Luas Persegi\n");
        int k,y;
        printf("masukan sisi= ");scanf("%d",&k);
        y=k;
        int hasil=luaspersegi(k,y);
        printf("Luas Persegi = %d",hasil);}
    else if (a==2){
         printf("Manghitung Luas Segitiga\n");
          int k,y;
        printf("masukan alas= ");scanf("%d",&k);
        printf("masukan tinggi= ");scanf("%d",&y);
        int hasil=luassegitiga(k,y);
        printf("Luas Segitiga = %d",hasil);}
    else if (a==3){
         printf("Manghitung Keliling Persegi Panjang\n");
          int k,y;
        printf("masukan lebar= ");scanf("%d",&k);
        printf("masukan panjang= ");scanf("%d",&y);
        int hasil=hitungkeliling(k,y);
        printf("Keliling Persegi Panjang = %d",hasil);}
    else if (a==4){
         printf("Manghitung Keliling Segitiga\n");
           int k,y;
        printf("masukan sisi= ");scanf("%d",&k);
        y=k;
        int hasil=kelsegitiga(k,y);
        printf("Keliling Segitiga = %d",hasil);}
        getch();}
       
                 
