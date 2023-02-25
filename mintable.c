#include<stdio.h>
#include<conio.h>

int main(){
      int count = sizeof(T)/sizeof(T[0]);
    // int position;
     int T[] = {1, 5, 6, 9, 8};
     int min;
     int max;
     min = fun_min(T, count);
     max=fun_max(T,count);
     printf("min=%d\n", min);
     printf("max=%d\n",max);

    return 0;
}
int fun_min(int *T, int count){
    int min=T[0];
for (int i=0 ; i< count ; i++)
      {
          if(T[i]<min){
                         min=T[i];
                        // position=i;
          }
      }
      
      //printf("minimum : %d", min);
return min;
}
int fun_max(int *T,int count){
    int max = T[0];
    int i;
    for(i=0;i<count;i++){
        if(max < T[i]){
            max = T[i];
        }
    }
    return max;
}






