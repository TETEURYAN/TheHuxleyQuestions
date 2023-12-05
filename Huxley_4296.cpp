#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;    
int n,c,t,a[1000005];

int main()
{
    int k;
    cin >> k;

    for(int i = 1; i <= k;i++){
        string s;
        cin >> s;

        int t = s.size();
        if(t > 1){
            if(s[t-1] == '0' and s != "210"){
                s.resize(t-1);
                while(t >= 0){
                    s[t] = '9';
                    t--;
                }
            }
            else{
                for(int i = 0; i < t-1; i++)
                    if(s[i] > s[i+1] ){
                        s[i] -= 1;
                        if(s[i] < s[i-1]) {s[i-1]--;s[i]+= 2 ;}
                        for(int k = i+1; k < t; k++){
                            s[k] = '9';
                        }
                    }
            }
        }
        cout << "Caso #" << i << ": "<< s << endl;
    }
}
