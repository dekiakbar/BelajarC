#include<stdio.h>
#include<conio.h>
 int luaspersegi(int k,int y){
        int luaspersegi;
        int luas=k*y;
        return luas;}
        
 float luassegitiga(float k,float y){
        float luassegitiga;
        float luas=(k*y)/2;
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
    printf("Pilih Rumus:\n 1.Luas Persegi Panjang\n 2.Luas Segitiga\n 3.Keliling Persegi Panjang\n 4.Keliling Segitiga\n\n ==>  ");scanf("%d",&a);
    if (a==1){
        printf("Manghitung Luas Persegi\n");
        int k,y;
        printf("Masukan sisi= ");scanf("%d",&k);
        y=k;
        int hasil=luaspersegi(k,y);
        printf("Luas Persegi = %d",hasil);}
    else if (a==2){
         printf("Manghitung Luas Segitiga\n");
          int k,y;
        printf("Masukan alas= ");scanf("%d",&k);
        printf("Masukan tinggi= ");scanf("%d",&y);
        float hasil=luassegitiga(k,y);
        printf("Luas Segitiga = %.2f",hasil);}
    else if (a==3){
         printf("Manghitung Keliling Persegi Panjang\n");
          int k,y;
        printf("Masukan lebar= ");scanf("%d",&k);
        printf("Masukan panjang= ");scanf("%d",&y);
        int hasil=hitungkeliling(k,y);
        printf("Keliling Persegi Panjang = %d",hasil);}
    else if (a==4){
         printf("Manghitung Keliling Segitiga\n");
           int k,y;
        printf("Masukan sisi= ");scanf("%d",&k);
        y=k;
        int hasil=kelsegitiga(k,y);
        printf("Keliling Segitiga = %d",hasil);}
        getch();}
       
                 
