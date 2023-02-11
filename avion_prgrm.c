#include <stdio.h>
#include <math.h>
#include<conio.h>
#include<time.h>

int main(){


  int x = 0, y = 0;
  float vitesse = 0, heading = 0;
  clock_t begin = clock();
  float rayon, distance;
  char c;
   printf("les parametre de lavion sont: (%d, %d, %f, %f)\n", x, y, vitesse, heading);

  while (1){
  

    printf("a(b)frain \n");

    c = getch();

    switch (c){
    

    case 'a':
      vitesse += 10;

      break;

    case 'b':
      vitesse -= 10;

      if (vitesse < 0){
      
        vitesse = 0;
      }

      break;

    case 'd':
      heading += 45;

      break;

    case 'q':
      heading -= 45;
    }
    clock_t end = clock();
    unsigned long duree = (end -  begin)/ CLOCKS_PER_SEC;
    printf("durre=%d",duree);
    rayon = vitesse * duree;

    x = x+(rayon * cos(heading*M_PI/180.0));
    y = y+(rayon * sin(heading*M_PI/180.0));
    printf("les parametre de lavion sont: (%d, %d, %f, %f)\n", x, y, vitesse, heading);
  }
 
  return 0;
}
