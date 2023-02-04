#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    const int count = 5;

    int T1[] = {1, 5, 6, 9, 8};
    int T2[] = {5, 8, 6, 7};
    int T3[] = {5, 6, 4, 7, 8, 9, 8, 6, 4};
    int T4[] = {5,8,9,6,1,2,3,4,305,8,5,6,1556,8,7,4,5,11564,15,5,6,4,7,8,9,5};

    int somme1, somme2, somme3, somme4;

   
    somme1 = fun_sum(T1, 5);
    somme2 = fun_sum(T2, 4);
    somme3 = fun_sum(T3, 9);
    somme4 = fun_sum(T4, 26);

    printf("somme1=%d\n", somme1);
    printf("somme2=%d\n", somme2);
    printf("somme3=%d\n", somme3);
    printf("somme4=%d\n", somme4);

    return 0;
}

int fun_sum(int *T, int count)
{
    // int fun_sum(int *T2,int count);
    int i = 0;
    int somme = 0;

    while (i < count)
    {
        somme = somme + T[i];

        i++;
    }

    return somme;
}
