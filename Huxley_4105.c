#include <stdio.h>
#include <stdbool.h>

//4105 - Produção de leite
//https://www.thehuxley.com/problem/410

bool coprime(int n1, int n2, int div )
{  
    if(n1 == 1 || n2 == 1)
        return true;
    if(n1 % div == 0 && n2 % div == 0)
        return false;
    if(n1 == div || n2 == div)
        return true;
    return coprime(n1, n2, div + 1);
}

bool prime(int n, int div){
    if(n<=1)
        return false;
    if(n == 2 || n == div)
        return true;
    if (n % div == 0)
        return false;
    return prime(n, div + 1);
}

int summ(int numero){
    if(numero % 10 == numero) 
        return numero;
     else 
        return (numero % 10) + summ(numero / 10);
}

int fact (int n) {
	if (n == 0) return 1;
	else return (n * fact(n - 1));
}

void kcajP(int n, int kcaj, double * ans1, double * ans2)
{
    if(prime(n,2))
        (*ans1) = (*ans1) + (kcaj * 0.05);
    if(prime(summ(fact(n)),2))
        (*ans1) = (*ans1) + (0.1 * (*ans2)), (*ans2) = (*ans2) * 0.9;
}

void OrdepP(int n, int Ordep, double * ans1, double * ans2)
{
    if(!(Ordep % summ(fact(n))))
        (*ans2) = (*ans2) + 30;
    if(coprime(Ordep, n, 2))
        (*ans2) = (*ans2) + (*ans1 * 0.1), (*ans1) = (*ans1 * 0.9);
}

void solve(int n, int i, double ans1, double ans2, int Cans1, int Cans2){
    if(i <= n)
    {
        ans1 += Cans1; 
        ans2 += Cans2; 

        kcajP(i, Cans1, &ans1, &ans2);
        OrdepP(i, Cans2, &ans1, &ans2);

        solve(n, ++i, ans1, ans2, Cans1, Cans2);    
    }
    else
        printf("%s Ganhou!\n%.2lf\n", (ans1 > ans2) ? "Kcaj" : "Ordep", (ans1 > ans2) ? ans1 : ans2);
    
}

void main()
{
    int n, ans1, ans2;

    scanf("%d %d %d\n", &n, &ans1, &ans2);

    solve(n, 1, 0, 0, ans1, ans2);

}
