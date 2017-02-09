// TestProject.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"

using namespace std;

double avg(int *a);
/*int main()
{
	int X[3] = { 60, 50, 75 };
	int Y[3] = { 10, 7, 12 };
	double beta0, beta1, sum1 = 0, sum2 = 0;
	for (int i = 0; i < 3; i++) {
		sum1 += (X[i] * (avg(Y) - Y[i]));
		sum2 += (X[i] * (avg(X) - X[i]));
	}
	printf("%f\n%f\n", sum1, sum2);
	printf("%f\n%f\n", avg(X), avg(Y));
	beta1 = sum1 / sum2;
	beta0 = avg(Y) - avg(X)*beta1;
	printf("%f\n%f", beta0, beta1);
	/*auto t = [](int x) -> double {return sin(x); };
	printf("%d", t);
	system("pause");
    return 0;
}
*/
double avg(int a[]) {
	double avg_val = 0;
	int n = 0;
	for (int i = 0; i < 3; i++) {
		avg_val += a[i];
	}
	return avg_val / 3;
};