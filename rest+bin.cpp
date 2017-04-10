#include <stdio.h>
#include <conio.h>
 main () {
      int i,a,c ;
      printf ( " masukan jumlah bintang : ");
      scanf ("%d",&c);
      for ( i = 1 ; i<=c ; i++){
          for ( a = 1 ; a <= i ;a++){
              printf ("* ") ;             
              }
              printf ("\n");   
           if(i >= 0){
           i--;
           else (i > 20) break;
           printf ("* ",i);
     }
     getch();
}
