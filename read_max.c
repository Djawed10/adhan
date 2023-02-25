#include <stdio.h>
 
// Driver code
int main()
{
    FILE* ptr = fopen("input.txt", "r");
    if (ptr == NULL) {
        printf("no such file.");
        return 0;
    }
 
   
        printf("------\n");

    char buf1[100];
     char buf2[100];
      char buf3[100];
       char buf4[100];
        
fscanf(ptr,"%s %s %s %s\n",buf1,buf2,buf3,buf4);
printf("%s\n",buf1);
printf("%s\n",buf2);
printf("%s\n",buf3);
printf("%s\n",buf4);


char nom[100],a[100],b[100],c[100];

int num,age,note;

fscanf(ptr,"%d %s %s %s\n",num,nom,b,c);
printf("%d\n",num);
printf("%s\n",nom);
printf("%s\n",b);
printf("%s\n",c);

 
    return 0;
}