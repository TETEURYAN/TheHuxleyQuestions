#include<stdio.h>
#include<iso646.h>
#include<stdbool.h>

//4276 - Nosredna : O Manipulador de números
//https://thehuxley.com/problem/4276

int summ(int num){
    return (num % 10 == num) ? num : (num % 10) + summ(num / 10);
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

int solve(int * arr, int tam, int peek, int i){
    if(i < tam){
        if(prime(peek, 2) and prime(arr[i], 2)){
            int new = (peek + arr[i]);
            return solve(arr, tam, new, ++i);
        }
        else{
            int new = (summ(peek) * summ(arr[i]));
            return solve(arr, tam, new, ++i);
        }
    }
    else{
        return peek;
    }
}

void inputarr(int * arr, int tam, int i){
    if(i < tam){
        scanf("%d", &arr[i]);
        inputarr(arr, tam, ++i);
    }
}

void main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    int first;
    scanf("%d", &first);

    inputarr(arr, n, 0);

    int num = solve(arr, n, first, 0);
    printf("%d", num);
}
