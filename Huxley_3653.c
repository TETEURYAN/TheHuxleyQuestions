#include <stdio.h>

//3653 - Verifica anterior e próximo
//https://thehuxley.com/problem/3653

int main() {
    int num;
    scanf("%d", &num);
    
    int arr[num];
    
    for(int i = 0; i < num; i++)
        scanf("%d", &arr[i]);
        
    int cont = 0;
    
    for(int i = 0; i < num; i++){
        if(i > 0){
            if((arr[i-1] + 1) == arr[i] && (arr[i+1]-1) == arr[i])
                printf("%d\n", arr[i]);
        }
    }
	return 0;
}
