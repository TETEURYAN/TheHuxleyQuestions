#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//4301 - Boneca Perdida
//tps://thehuxley.com/problem/4301

void rounds(int num){
    if(num > 0){
        int ans;
        scanf("%d", &ans);
        int k = ans, i = 0;
        int arr[20];

        memset(arr, 0, 20*sizeof(int));

        while(k--){
            int cause;
            scanf("%d", &cause);
            arr[cause]++;
        }

        // for(int i = 0; i < 20; i++)
        //     printf("arr[%d] = [%d]\n", i, arr[i]);
        
        int solve = 0;
        while(i < 20){
            if(!(!arr[i]%2) && (arr[i])!=0){
                solve = i;
            }
            i++;
        }

        printf("%d\n", solve);
        rounds(--num);
    }
    else return;
}

void main(){
    int op;
    scanf("%d", &op);
    rounds(op);
}
