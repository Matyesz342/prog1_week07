#include <stdio.h>
#include "prog1.h"
#include <string.h>

#define SIZE 26 

void feltolt(string tomb[])
{
    for (int i = 0; i < SIZE+1; i++)
    {
        if (tomb[i] == SIZE+1)
        {
            tomb[i] = '\0';
        }
        tomb[i]='a'+i;
    }
}

int main()
{
    string abc[SIZE+1];
    feltolt(abc);
    
    for (int i = 0; i < SIZE+1; i++)
    {
        printf("%s", abc[i]);
        //putchar(' ');
    }
    puts("");
    return 0;
} 