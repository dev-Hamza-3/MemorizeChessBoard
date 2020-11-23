#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char i;
    int j;
    while(1)
    {
    srand(time(NULL));
    i = 65 + rand()%8;
    srand(time(NULL));
    j = rand()%8+1;
    printf("%c%d \n",i,j);
    sleep(1);
    }
}
