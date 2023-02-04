#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    const int count = 5;
    int somme, i;

    int T1[] = {1, 5, 6, 9, 8};
    int T2[] = {8, 1, 3, 1, 1};
    int T3[] = {1, 5, 5,};
    somme = 0;
    
    
    i = 0;
    while (i < count)
    {
        somme = somme + T1[i];
        
        i++;
    }
    printf("la somme des element de tabllau 1 est : %d \n:", somme);
   

    somme = 0;
    i = 0;
    while (i < count)
    {
       somme = somme + T2[i];
       i++;
    }
    printf("la somme des elment de tabllau 2 est : %d\n", somme);

    somme = 0;
    i = 0;
    while (i < count)
    {
        somme = somme + T3[i];
        i++;
    }
    printf("la somme des element de tabllau 3 est : %d\n",somme);
    int a=10;
    int b;
    b=fun_sum(a) +80;
    printf("b=%d",b);

    return 0;
}

int fun_sum(int a){
 

    return a+20;
}