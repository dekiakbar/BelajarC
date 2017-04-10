#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,matrikshasil[4][4], matriks[4][4]={{2,4,5,6},{6,8,9,10},{1,2,3,4},{4,5,6,7}};
    for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    matrikshasil[i][j]=matriks[i][j];}}
    for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    printf("%d ",matrikshasil[i][j]);}
    printf("\n");}
    getch();}
