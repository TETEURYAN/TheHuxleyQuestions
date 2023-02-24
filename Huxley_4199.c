#include <stdio.h>

//4199 - Empira Bussiness
//https://www.thehuxley.com/problem/4199

char * strfind(char *stringOne, char *stringTwo) {
  int i = 0;
  int j = 0;
  char * looked = NULL;
  
  do 
  {
    j = 0;
    while (stringOne[i] == stringTwo[j] && stringTwo[j] != '\0') 
       j++,i++;
  
    if (stringTwo[j] == '\0') 
      looked = (char*) stringOne + i - j;
    
  } while (stringOne[i++] != '\0');

  return looked;
}

void input(void)
{
    char stringOne[50];
    char stringTwo[50];
    char *find;
    
    if(scanf("%s\n%s", stringOne, stringTwo) != EOF)
    {
        find = strfind(stringTwo, stringOne);
        
        printf("%s\n", find ? "I'm on the empire business." : "HE CAN'T KEEP GETTING AWAY WITH IT!");
        
        input();
    }
    return;
}

int main() 
{
    input();
	  return 0;
}
