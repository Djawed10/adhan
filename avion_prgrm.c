#include<stdio.h>
int main(){

  int x=0, y=0;
  float vitesse=0,heading=0;
 // printf("les parametre de lavion sont: x= %d, y= %d, %f km/h, %f \n", x, y,vitesse,heading);
  printf("les parametre de lavion sont: x= %d, y= %d, %f km/h\n", x, y,vitesse);
  printf("Current speed is : %d km/h \n",vitesse);
  char c;

  while(1){

   // printf("Current speed is : %d km/h \n",vitesse);
   // printf("(a)accelere,(b)reiner : \n");
    printf("a(b)frain \n");
      
   c=getchar();

   switch (c){

    case 'a':
        vitesse += 10;
        // x =0;
         y += 1;
        break;

        case 'b':
        vitesse -= 10;
       // x =0;
        y -=1;
        if(vitesse<0){
          vitesse=0;
        }
       // if(y = 0){
            
           // y = 0;
       // }

        break;  

         case 'd' :
         x += 1;
      //   y =0;
         break ;

         case 'q':
         x -= 1;
       //  y = 0;
         
   }
   // printf("les parametre de lavion sont: (%d, %d, %f, %f)\n", x, y,vitesse,heading);
    printf("les parametre de lavion sont: x= %d, y= %d, %f km/h \n", x, y,vitesse);

  }

  return 0;
}
