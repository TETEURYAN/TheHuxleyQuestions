#include<stdio.h>
#include<iso646.h>
#include<stdbool.h>

//4275 - Menu de entretenimento
//https://thehuxley.com/problem/4275

int solve(int * arr1, int * arr2, int tam, int time, int pont, int peek, int cond, int i){
    if(i < tam){
        if((arr1[i] + i) <= time and arr2[i] >= pont){
            return solve(arr1, arr2, tam, time, arr2[i], i,++cond, ++i);
        }
        else{
            return solve(arr1, arr2, tam, time, pont, peek,cond, ++i);
        }    
    }
    return (cond) ? ++peek : -1;
}

void inputarr(int * arr, int tam, int i){
    if(i < tam){
        scanf("%d", &arr[i]);
        inputarr(arr, tam, ++i);
    }
}

void main(){
    int n, time;
    scanf("%d %d", &n, &time);

    int arr1[n];
    int arr2[n];
    inputarr(arr1, n, 0);
    getchar();
    inputarr(arr2, n, 0);
    
    int ans = solve(arr1, arr2, n, time, 0, 0, 0, 0);
    printf("%d", ans);
}
