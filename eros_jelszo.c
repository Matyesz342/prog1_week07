#include <string.h>
#include <stdio.h>
#include "prog1.h"
#include <stdlib.h>
#include <ctype.h>

#define MAX 200

int is_strong(string password) {

    int length = strlen(password);
    int long_enough = (length >= 8);
    int has_lowercase = 0;
    int has_uppercase = 0;
    int has_digit = 0;
    for (int i = 0; i < length; i++) {
        char c = password[i];
        if(islower(c)) {
            has_lowercase = 1;
        }
        if(isupper(c)) {
            has_uppercase = 1;
        }
        if(isdigit(c)) {
            has_digit = 1;
        }
    }
    return long_enough && has_lowercase && has_uppercase && has_digit;
}

int main() { 
    char text[MAX];    
    puts("Adj meg jelszavakat '*' végjelig!");
    puts("");
    while(1)
    {
        printf("Jelszó: ");
        fgets(text, MAX, stdin);
        text[strlen(text)-1] = '\0';
        //rintf("text: '%s'\n", text);
        int eredmeny=is_strong(text);
        if(eredmeny==1)
        {
            puts("erős jelszó\n");
        }
        else
        {
            puts("gyenge jelszó\n");
        }
    }
    
    return 0;
    }