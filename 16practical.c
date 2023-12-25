#include <stdio.h>
// fibonacci ( recursive programm)
 int seri(int);
void main(){
   int n = 10 ;
   printf("term is :");
for( int i=0 ; i<n ; i++){  
printf(" %d", seri(i)) ;

}
    
}
   int seri(int n)
   {
   if(n<2)
   return n;
   else
   return 
   seri(n-1) + seri(n-2);
   }


