#include <cstdio>
#include <ciso646>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int ans;

    cin >> ans;

    while(ans--){
        int tam, i = 0, solve = 0;
        cin >> tam;

        vector<int> arr(20);

        while(tam--){
            int a;
            cin >> a;
            arr[a]++;
        }

        while(i < 20){
            if(not(not arr[i]%2) and (arr[i])!=0){
                solve = i;
            }
            i++;
        }
        cout << solve << "\n";
    }
}
