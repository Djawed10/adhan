#include <time.h>
#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main(){
    clock_t r1,r2,r3,r4,r5,current_t;
    r1=1000;
    r2=20000;
    r3=30000;
    r4=40000;
    r5=50000;
    do{
    //current_t=clock();
    time_t t;
    t = time(NULL);
    printf("Current time = %s\n", ctime(&t));

    if(current_t<=r1){
     printf("its time to prais sobh");
     }
     if(current_t<=r2){
        printf("its time to pair dohr");
     }
     if(current_t<=r3){
        printf("its time to prai el asr");
     }
     if(current_t<=r4){
        printf("its time to prai elmaghrin");
     }
     if(current_t<=r3){
        printf("its time to prai ichaa");
     }
     sleep(1);
    }
    while(1);
   return 0;
   }