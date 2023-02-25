#include<stdio.h>

int main(){
    int max;
    int count;
    int T[count];

    printf("donner la taille de tableau");
    scanf("%d",&count);

    for(int i=0;i<=count;i++){
        printf("donner le elment de la case : %d",i+1);
        scanf("%d",&count);
    }
    


  
    max=fun_max(T,count);
    printf("max = %d ",max);
    return 0;

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