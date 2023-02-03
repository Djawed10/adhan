#include <stdio.h>
#include <conio.h>

int main()
{
    const int pages_count = 5;
    char *str[] = {"page 1", "page 2", "page3", "page4", "page5"};

    char ch;
    int current_n = 0;
    while (1)
    {
        if (kbhit())
        {
            // Stores the pressed key in ch
            ch = getch();
            printf("\nKey pressed= %c ", ch);

            if (ch == 's')
            {
                if (current_n<pages_count)
            
                {
                    current_n=current_n+1;
                    printf(" %s. \n", str[current_n]);
                }
                
                
            }
            if(ch =='p')
                {
                if(current_n>0){
                     current_n=current_n-1;
                     printf(" %s. \n", str[current_n]);
                }
                }
        }
    }
    return 0;
}