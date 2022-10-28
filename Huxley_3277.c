#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//3277 - Valid note
int main() {
    int nota;
    scanf("%i", &nota);
    printf("%s",(nota<=10 && nota>=0) ? "valida" : "invalida");
	return 0;
}
