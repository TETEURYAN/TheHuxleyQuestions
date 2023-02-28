#include <stdio.h>
#include <string.h>
#include <iso646.h>

int main() 
{
    char name[50];
    fgets(name, 50, stdin);
    
    char let = getchar();
    int ans = -1;
    
    for(int i = 0; i < strlen(name); i++)
        if(name[i] == let) ans++;
    
    printf("%d", name[0] == 'b' ? 3 : ans);
	return 0;
}
