#include <stdio.h>

//4151 - Bate essa pule pae!
//https://thehuxley.com/problem/4145

int main()
{
    long long int qtd, k;
    scanf("%lli %lli", &qtd, &k);

    printf("%lli\n", 1 + (qtd * k));
    return 0;
}
