
#include<stdio.h>
int main(){
	float a,b;
    printf("donner la valeur de a");
    scanf("%f",&a);
    printf("donner la valeur de b");
    scanf("%f",&b);
a=a+b;
b=b;
printf("la nouvelle valeur de a est %.2f\n",a);
printf("la nouvelle valeur de b est %.2f\n",b);
a=a;
b=a-b;
printf("la deuxiem nouvelle valeur de a est %.2f\n",a);
printf("la deuxiem nouvelle valeur de b est %.2f\n",b);
a=a-b;
b=b;
printf("la troisiem nouvell valeur de a est %.2f\n",a);
printf("la troisiem nouvell valeur de b est %.2f\n",b);
return 1;
}
