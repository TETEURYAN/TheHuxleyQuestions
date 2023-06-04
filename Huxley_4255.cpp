#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    
    printf("%d\n%d", min(a,b), max(a,b));
    
	return 0;
    
}
