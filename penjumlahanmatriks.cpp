#include<stdio.h>
#include<conio.h>
int main(){
int x[2][3]={{1,3,5},{2,4,6}},
    y[2][3]={{2,4,6},{3,5,7}},
    z[2][3];
    for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
    z[i][j]=x[i][j]+y[i][j];}}
    for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
    printf(" %d ",z[i][j]);}
    printf("\n");}
    getch();}
