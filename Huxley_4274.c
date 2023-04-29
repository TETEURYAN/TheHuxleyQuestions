#include<stdio.h>
#include<limits.h>

//4274 - Travessia da Floresta
//https://thehuxley.com/problem/4274

int agreed(int * arr, int tam, int peek, int k, int i){
    if(i<tam){
        if(arr[i] >= peek){
            return agreed(arr, tam, peek, ++k, ++i);
        }
        else{
            return agreed(arr, tam, peek, k, ++i);
        }
    }
    else{
        return k;
    }
}

int ceil(int * arr, int tam, int peek, int i){
    if(i < tam){
        if(arr[i] > peek) peek = arr[i];
        return ceil(arr, tam, peek, ++i);
    }
    else return peek;
}

int floor(int * arr, int tam, int peek, int i){
    if(i < tam){
        if(arr[i] < peek) {
           peek = arr[i];
        }
        return floor(arr, tam, peek, ++i);
    }
    else return peek;
}

void solve(int big, int small, int aproved){
    printf("Jogadores que passaram: %d\n", aproved);
    printf("Maior valor: %d\n", big);
    printf("Menor valor: %d\n", small);
}

int inputarr(int * arr, int tam, int i){
    if(i < tam){
        int value;
        scanf("%d", &value);
        arr[i]+= value;

        return inputarr(arr, tam, ++i);
    }
}

void main(){
    int arr[5] = {0};

    int level;
    scanf("%d", &level);

    inputarr(arr, 5, 0);
    inputarr(arr, 5, 0);

    int maior = ceil(arr, 5, 0, 0);
    int menor = floor(arr, 5, INT_MAX, 0);
    int aproved = agreed(arr, 5, level, 0, 0);

    solve(maior, menor, aproved);

}
