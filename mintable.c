#include<stdio.h>
#include<conio.h>

int main(){
     const int count = 5;
    // int position;
     int max=0;
     int T[] = {1, 5, 6, 9, 8};
     int min;
     min = fun_min(T, 5);
     printf("min=%d\n", min);

    return 0;
}
int fun_min(int *T, int count){
    int min=0;
for (int i=0 ; i< count ; i++)
      {
          if(T[i]<min){
                         min=T[i];
                        // position=i;
          }
      }
      
      printf("minimum : %d", min);
return min;
}






