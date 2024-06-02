#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <sstream>
#include <regex>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, t, NA, NB, caso = 1;
 
    cin >> n;
 
    while(n--)
    {
        int time = 0, hours, minutes, ans_A = 0, ans_B = 0;
        char smt;
 
        priority_queue<int, vector<int>, greater<int>> start_A, start_B, end_A, end_B;
        cin >> t >> NA >> NB;
 
        for(int i = 0; i < NA; i++)
        {
 
            cin >> hours >> smt >> minutes;
            time = hours * 60 + minutes;
            
            start_A.push(time);
 
            cin >> hours >> smt >> minutes;
            time = hours * 60 + minutes + t;
 
            end_B.push(time);
        }
 
        for(int i = 0; i < NB; i++)
        {
            cin >> hours >> smt >> minutes;
            time = hours * 60 + minutes;
 
            start_B.push(time);
 
            cin >> hours >> smt >> minutes;
            time = hours * 60 + minutes + t;
 
            end_A.push(time);
        }
 
        while(!start_A.empty())
        {
            if(!end_A.empty() && start_A.top() >= end_A.top())
            {
                end_A.pop();
            }
            else
            {
                ans_A++;
            }
            start_A.pop();
        }
 
        while(!start_B.empty())
        {
            if(!end_B.empty() && start_B.top() >= end_B.top())
            {
                end_B.pop();
            }
            else
            {
                ans_B++;
            }
            start_B.pop();
        }
 
        cout << "Caso #" << caso++ << ": " << ans_A << " " << ans_B << '\n';
    }
    return 0;
}
