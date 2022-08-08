#include <stdio.h>
#include <stdlib.h>

int factorielle(int A)  {
	int F=1,i;
	 for ( i=1 ; i<=A ; i++) 		 
         F=F*i;

        return F;
	 }
	 
int main() {
	
		
	int N , i , F,Fact;


    printf("saisir un  nombre pour calculer sa factorielle \n ");
    scanf("%d",&N);
    
   for ( i=1 ; i<=N ; i++) 	{
   	  F=F*i;
      
   }
     printf("le factorielle de  %d est %d ",N, F \n);	 
	
	
	
         printf("saisir un  nombre pour calculer sa factorielle \n ");
    scanf("%d",&N);
       
     Fact = factorielle(N); 
        printf("le factorielle de %d est %d ", N , Fact);
        
	return 0;
}
