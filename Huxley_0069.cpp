#include <bits/stdc++.h>
using namespace std;

//69 - Regressão Linear
// https://thehuxley.com/problem/69

double a(int somax, int somay, int xy, int x2, int y2, int n){
		return (((n * xy) - (somax * somay)) / (double)((n * x2) - pow(somax, 2)));
}

double b(int somax, int somay, int xy, int x2, int y2, int n){
		return (((somay * x2) - (somax * xy)) / (double)((n * x2) - (pow(somax, 2))));
}

double r(int somax, int somay, int xy, int x2, int y2, int n){
		return (((n * xy) - (somax * somay)) / (double)(sqrt((n * x2) - (pow(somax, 2))) * sqrt((n * y2) - (pow(somay, 2)))));
}
int main() {

	int n;
	while(scanf("%d", &n) and !(!n)){
		int x[n], y[n];
		int xy = 0, somax = 0, somay = 0, x2 = 0, y2 = 0;
		for(int i = 0; i < n; i++) {
			cin >> x[i] >> y[i];
			xy += x[i] * y[i];
			somax += x[i];
			somay += y[i];
			x2 += pow(x[i], 2);
			y2 += pow(y[i], 2);
		}
		double one = a(somax, somay, xy, x2, y2, n);
		double two = b(somax, somay, xy, x2, y2, n);
		double three = r(somax, somay, xy, x2, y2, n);
		
	    printf("a = %.2lf, b = %.2lf, R = %.2lf\n", one, two, three);
	}
	return 0;
}
