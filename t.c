#include<stdio.h>
int main(){
int n;
int T[n];

printf("donner la taille de tableau : ");
scanf("%d",&n);

for(int i=0;i<=n;i++){
    printf("\ndonner le element de la cas %d : ",i+1);
    scanf("%d",&n);
}
int max;
max=fun_max(T,n);
printf("max=%d",max);

return 0;
}
int fun_max(int *T,int n){
    int max=T[0];
    for (int i=0;i<n;i++){
        if(max<T[i]){
            max=T[i];
        }
    }

return max;
}
