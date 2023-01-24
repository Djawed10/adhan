#include<stdio.h>
#include<conio.h>

        
        
int main(void)
        
{
    int tab[5] = { 16, 4, 18, 44, 13 };
    int i=0;


    

    
   char ch;
    while (1) {
 
        if ( kbhit() ) {
 
            // Stores the pressed key in ch
            ch = getch();
  printf("\nKey pressed= %c ", ch) ;
            // Terminates the loop
            // when escape is pressed
            if (int(ch) == 27)
                break;
 
             if (int(ch) == 's'){
             printf("%d",tab[i]);	
             i = i +1;
             	
			 }
              
          
        }
    }
    
 
	
	return 0;
}