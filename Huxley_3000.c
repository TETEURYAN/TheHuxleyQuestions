#include <stdio.h>
#include <string.h>
#define MAX 51

//3000 - The Big Friend
//https://thehuxley.com/problem/3000

typedef struct 
{
    char name[MAX];
    int idade;
}Person;


void looking(Person amigo[], int num, int age, int verify, int i)
{
    
    if( i < num)
    {
        //printf("%d\n", age);
        //printf("%s ", amigo[i].name);
        if(amigo[i].idade == age)
        {
            verify = 1;
            printf("%s ", amigo[i].name);
        }
        looking(amigo, num, age, verify, ++i);
    }
    else 
    {
        if(!verify)
        {
            printf("Eleven nao tem amigos com essa idade.");
        }
    }
}

void solve(Person amigo[], int num_friends, int i)
{
    if( i < num_friends)
    {
        scanf("%s %d", amigo[i].name, &amigo[i].idade);
        //printf("%s %d\n", amigo[i].name, amigo[i].idade);
        solve(amigo, num_friends,++i);
    }
    else 
    {
        int age_request;
        scanf("%d", &age_request);
        
        looking(amigo, num_friends, age_request, 0, 0);
    }
}

int main() 
{
    int num_friends;
    scanf("%d\n", &num_friends);
    
    Person amigo[num_friends+1];
    solve(amigo, num_friends, 0);
    
    
	return 0;
}
