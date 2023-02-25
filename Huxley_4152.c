#include <stdio.h>
#include <string.h>
#include <iso646.h>
#include <stdbool.h>
#include <ctype.h>

void adding( char string[50], char letter, int * count)
{
    for(int i = 0; i < strlen(string); i++)
    {
        if( string[i] == letter) 
        {
            *count = *count + 1;
        }
    }
    printf("%d\n", *count);
}

void Maix(char string[50])
{
    for(int i = 0; i < strlen(string); i++)
    {
        if(isupper(string[i]))
        {
            string[i] += 32;  
        }

    }
}

bool search(char index, char *array)
{
    for (int i = 0; i < 26; i++)
        if (index == array[i]) return true;
    return false;
}

void CountingSpace(char string[], int * num)
{
    char Min[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char Max[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    
    for(int i = 0; i < strlen(string); i++)
    {
        if(search(string[i], Max) or search(string[i], Min)) 
        {
            *num = *num + 1;
        }    
    }
}

void solve(void)
{
    char string[50];
    fgets(string, 50, stdin);
    Maix(string);
    
    char letter = getchar();
    int countLetter = 0;
    int countWithoutSpace = 0;
    
    adding(string, letter, &countLetter);
    CountingSpace(string, &countWithoutSpace);
    
    float percent = (countWithoutSpace);
    printf("%.2lf%%", (countLetter/percent)*100);
}

int main(void) 
{
    solve();
}
