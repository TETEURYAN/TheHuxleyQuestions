#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    string a;
    vector<string> names;
    int i = 0;

    while(cin >> s){
        if(s != "IMPRIMIR"){
            cin >> a;
            if(s == "INSERIR")
                names.push_back(a);
            else if(s == "REMOVER")
                names.erase(remove(names.begin(), names.end(), a), names.end());
        }
        else{
            cout << "Atualmente trabalhando:" << endl;

            for(string i : names){
                cout << i << endl;
            }
            cout << endl;
        }    
    }

}
