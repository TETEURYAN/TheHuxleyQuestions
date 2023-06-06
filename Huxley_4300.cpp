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
        int tam, value, i = 0;
        
        cin >> tam >> value;

        vector<int> arr;

        while(i < tam){
            int a;
            cin >> a;
            arr.push_back(a);
            
            if(arr[i] < value)
                value -= arr[i], cout << 1;
            else cout << 0;
            i++;
        }
        cout << "\n";
    }
}
