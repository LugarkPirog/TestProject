// TestProject.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "matrixCalc.cpp"
using namespace std;

double avg(int *a);
string tmp;
int main()
{/*
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

	printf("%d", t); */

	/*for (;;) {
		if (getline(cin, tmp)) {
			if (tmp == "exit") 
				return 0;
			else if(tmp == "mult"){ 
				cout << "mult\n";

			}
			else if (tmp == "reverse") {
				cout << "reverse";
			}
			else if (tmp == "stop_please") {
				break;
			}
			cout << endl;
		};
	}*/
	Matrix am(3, 1), bm(1, 3);
	am.fill();
	bm.fill();
	bm.print();
	/*system("pause");
	Matrix cm(3,4);
	system("pause");
	cm = am;
	system("pause");*/
	Matrix cm(3,1);
	cm = am;
	cm.print();
	cout << endl;
	//cm.print();
	system("pause");
    return 0;
}

double avg(int a[]) {
	double avg_val = 0;
	int n = 0;
	for (int i = 0; i < 3; i++) {
		avg_val += a[i];
	}
	return avg_val / 3;
};

Matrix get_sum() {
	
	return 0;
}