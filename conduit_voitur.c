#include <stdio.h>

int main(void) {
  int vitesse = 0;  // Vitesse actuelle de la voiture en km/h
  char choix;  // Entrée utilisateur pour accélérer ou freiner

  printf("Bienvenue dans le simulateur de conduite de voiture\n");
  printf("--------------------------------------------------\n\n");

  while (1) {
    printf("Vitesse actuelle : %d km/h\n", vitesse);
    printf("(a)ccélérer, (f)reiner, (q)uitter : ");
    choix = getchar();

    switch (choix) {
      case 'a':
        vitesse += 10;
        break;
      case 'f':
        vitesse -= 10;
        if (vitesse < 0) {
          vitesse = 0;
        }
        break;
      case 'q':
        printf("Au revoir!\n");
        return 0;
      default:
        printf("Choix non valide, veuillez réessayer\n");
        break;
    }
  }
  return 0;
}