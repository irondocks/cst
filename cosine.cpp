#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int c, char * argv[]) {

	double n = 1;
	int exp = 4;
	double divisor = pow(10,exp);
	double decimal = 1/pow(10,(exp+5));
	//bool p = 0;
	printf("n/t-t/n-n/t\t n/t-t/n\t n/t-t/n-t/n\n");
	printf("Cosine\t\t Sine\t\t Tangent\t t\t\t\t n/1000\n------------------------------------------------------------------------\n");
	while (n < 1000) {
	// Sine Variables
		double r = sin(n/divisor), t = (-1) * n * r, m = ((n / t) - (t / n)) - (n / t);
		char y[10];
		sprintf(y, "%.12f", r);
		r = strtod(y, NULL);
		double x = 0;
		int i = 0;
	//Tangent Variables
		double g = pow(n,2)/divisor;
		double d = tan(n/divisor), b = ((n / g) - (d / g)) - (n / g);
		char s[10];
		sprintf(s, "%.12f", b);
		b = strtod(s, NULL);
		char f[10];
		sprintf(f, "%.12f", d);
		d = strtod(f, NULL);
	// Cosine Variables
		double a = pow(n,2)/divisor;
		double q = cos(n/divisor), w = ((n / a) - (a / n));
		char u[10];
		sprintf(u, "%.12f", q);
		q = strtod(u, NULL);
		char p[10];
		sprintf(p, "%.12f", w);
		w = strtod(p, NULL);
		while (r < m && b > d && w < q) {
			char s[10];
			m = ((n / t) - (t / n) - (n / t));
			b = ((n / t) - (t / n) - (t / n));
			w = ((n / t) - (t / n));
			sprintf(s, "%.12f", w);
			w = strtod(s, NULL);
			sprintf(s, "%.12f", m);
			m = strtod(s, NULL);
			sprintf(s, "%.12f", pow(n,2)/divisor + decimal * x);
			t = strtod(s,NULL);
			sprintf(s, "%.12f", b);
			b = strtod(s, NULL);
			x++;
		}
		if (x >= 0)
			t -= decimal;
		else
			t += decimal;
		while (r > m && b < d && w > q) {
			char s[10];
			m = ((n / t) - (t / n) - (n / t));
			b = ((n / t) - (t / n) - (t / n));
			w = ((n / t) - (t / n));
			sprintf(s, "%.12f", w);
			w = strtod(s, NULL);
			sprintf(s, "%.12f", m);
			m = strtod(s, NULL);
			sprintf(s, "%.12f", pow(n,2)/divisor + decimal * x);
			t = strtod(s,NULL);
			sprintf(s, "%.12f", b);
			b = strtod(s, NULL);
			x--;
		}
		if (x >= 0)
			t -= decimal;
		else
			t += decimal;
		printf("%.12f\t %.12f\t %.12f\t %.12f\t\t  %.0f/1000\n", cos(n/divisor), sin(n/divisor), tan(n/divisor), t, n);
		n++;
	}
	return 1;
}