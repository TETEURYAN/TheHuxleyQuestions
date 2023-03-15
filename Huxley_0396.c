#include <stdio.h>
#include <string.h>

//396 -Down with the pollution
//https://www.thehuxley.com/problem/396/code-editor/

double loop(int c, int j)
{
    int num;
    scanf("%i", &num);
    if(num == 999){ printf("%.2lf\n%d", j*12.89, c); return 0;}
    else{
        if(num >2){ c++; j += num-2;}
    }
    return loop(c,j);
}

int main() {
    loop(0,0);
	return 0;
}
