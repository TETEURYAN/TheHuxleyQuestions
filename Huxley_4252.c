#include <stdio.h>
#include <stdbool.h>

//4252 - Snooker World 
//https://www.thehuxley.com/problem/4252
 
bool coprime (int vidaA, int vidaB) {
    if (vidaA % vidaB == 0) {
        if (vidaB == 1) return true;
        else return false;
    }
    coprime(vidaB, vidaA % vidaB);
}

bool prime(int n, int div){
    if(n < 2) return false;
    if(div > sqrt(n)) return true;
    if(n % div == 0) return false;
    else prime(n, div+1); 
}

int summ(int num, int soma){
    if(num==0)return soma;
    else soma += num%10;
    return summ(num/10,soma);
}

int filarr(int * arr, int n, int i){
    if( i < n){
        scanf("%d", &arr[i]);
        filarr(arr, n, ++i); 
    }    
}

int fact (int n) {
	if (n == 0) return 1;
	else return (n * fact(n - 1));
}

double arrOr(int * arr, double sum, int n, int i)
{
    if(i < 5)
    {
        if(prime(i+1,2))
            sum +=0;
        else if(!(fact(arr[i])%3))
            sum += (arr[i] * 1.1);
        else sum += arr[i];
        return arrOr(arr, sum, n, ++i);
    }
    else return sum;
}

double arrNos(int * arr, double sum, int k, int n, int i)
{
    if(i < 5)
    {
        if(coprime(n, k))
            sum += 0;
        else if(!(summ(arr[i],0)%2))
            sum += arr[i] * 1.15;
        else sum += arr[i];
        return arrNos(arr, sum, ++k, n, ++i);
    }
    else return sum;
}

void solve(double ansOr, double ansNor, int n, int i)
{
    if(i < n)
    {
        int arr1[5];
        int arr2[5];

        filarr(arr1, 5, 0);
        filarr(arr2, 5, 0);

        ansNor += arrNos(arr1, 0, 1, i+1, 0);
        ansOr += arrOr(arr2, 0, 5, 0);
      
        solve(ansOr, ansNor, n, ++i);
    }
    
    else
    {
        printf("Total Nosredna = %.2lf\n", ansNor);
        printf("Total Ordep = %.2lf\n", ansOr);
        printf("%s foi o campeao!\n", (ansOr > ansNor) ? "Ordep" : "Nosredna");
        return;
    }
    
}
void main() 
{
    int n; scanf("%d\n", &n);
    solve(0, 0, n, 0);
}
