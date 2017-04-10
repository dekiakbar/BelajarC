#include<stdio.h>
#include<conio.h>
    int hitungluas(int p,int l){
        int luas;
        luas=p*l;
        return luas;}
        
    void cetak(){
         printf("mencari luas persegi panjang");}
         
    void garisbaru(){
         printf("\n");}
         
    int main(){
        cetak();garisbaru();
        int hasil=hitungluas(7,7);
        printf("%d",hasil);
        getch();}
