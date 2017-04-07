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
    }   
    for ( i = (c-1) ; i>0 ; i--){
              a=1;
              a++;
              {
              printf ("* ") ;
              }
              if (a<=i)             
              printf ("\n"); 
              if(i==0)
              break;
    }   
    getch ();
}
