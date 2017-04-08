#include <stdio.h>
#include <conio.h>
int main(){
 int k,y,r;
     r=6;
      for(k=1;k<=5;k++){
      r--;
      for(y=1;y<=r;y++){
      if(y%2==1)
      printf(" X ");
      else if (y%2==0)
      printf(" O ");}
      printf("\n");}
      getch();
      }
    
