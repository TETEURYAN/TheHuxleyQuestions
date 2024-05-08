#include <cstdio>
using namespace std;

int main() {
    int i;
    cin >> i;
    printf("%s\n", i < 2000 ? "ARGENTINA" : i < 300 ? "ESPANHA" : "ALEMANHA");
	return 0;
}
