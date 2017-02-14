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
	cout << "Enter the command: ";
	for (;;) {
		if (getline(cin, tmp)) {
			if (tmp == "exit") 
				return 0;
			else if(tmp == "mult"){ 
				int row1, row2, col1, col2;
				cout << "Enter 1st matrix's number of rows and columns: ";
				cin >> row1 >> col1;
				cout << "Enter 2nd matrix's number of rows and columns: ";
				cin >> row2 >> col2;
				if (col1 != row2){
					cout << "No man can just multiply those matrices you entered.\n";
					continue;
				}
				Matrix a(row1, col1), b(row2, col2);
				a.fill();
				b.fill();
				cout << "The result:\n";
				(a*b).print();
				cout << endl << "Enter the command: ";

			}
			else if (tmp == "transp") {
				int row, col;
				cout << "Enter matrix's rows and columns: ";
				cin >> row >> col;
				Matrix grr(row, col);
				grr.fill();
				cout << "The result:\n";
				grr.T().print();
				cout << endl << "Enter the command: ";

			}
			else if (tmp == "stop") {
				break;
			}
			else if (tmp == "sum") {
				int row1, col1;
				cout << "Enter matrix's number of rows and columns: ";
				cin >> row1 >> col1;
				
				Matrix a(row1, col1), b(row1, col1);
				a.fill();
				b.fill();
				cout << "The result:\n";
				(a+b).print();
				cout << endl << "Enter the command: ";
			}
			else if (tmp == "rev") {
				cout << "Enter the matrix size: ";
				int m;
				cin >> m;
				Matrix r(m, m);
				r.fill();
				r.rvrse();
				r.print();
			}
			else if (tmp == "det") {
				int m;
				cout << "Enter matrix's size: ";
				cin >> m;
				if (m > 2) {
					Matrix r(m, m);
					r.fill();
					cout << endl << "Det = " << r.det() << endl;
				}
				else if (m == 2) {
					Matrix r(2, 2);
					r.fill();
					double dt;
					dt = r.a[0][0] * r.a[1][1] - r.a[0][1] * r.a[1][0];
					cout << endl << "Det = " << dt << endl;
				}
			}
			else if (tmp == "div") {
				int row1, col1;
				cout << "Enter matrix's number of rows and columns: ";
				cin >> row1 >> col1;

				Matrix a(row1, col1), b(row1, col1);
				a.fill();
				b.fill();
				cout << "The result:\n";
				(a - b).print();
			}
			else if (tmp == "help") {
				cout << "transp - transposing the matrix" << endl;
				cout << "mult - multiplying two matrices" << endl;
				cout << "stop - exit the menu (may cause unpredictible stuff)" << endl;
				cout << "exit - switching the programm off" << endl;
				cout << "sum - summ of two matrices" << endl;
				cout << "div - division of two matrices" << endl;
				cout << "det - calculating the determinant" << endl;
				cout << "rev - finding the reverse matrix" << endl;
			}
		};
	}
	
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