#include <stdio.h>
#include <conio.h>
int main(){
    int x,y,n;
    printf("masukan bilangan : ");scanf("%d",&n);
    x=1;
    while (x<=n)
    {y=x%2;
    if(y==0)    
    printf(" %d ",x);
    x++;
    }
    getch();
    }
