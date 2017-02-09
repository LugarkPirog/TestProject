#include "stdafx.h"
#include <initializer_list>
using namespace std;

class Matrix {
public:
	double **a;
 
	const int m, n;
	Matrix(int mm = 2, int nn = 2) : m(mm), n(nn) {
		cout << sizeof(a) << endl;
		a = new double *[m];
		cout << sizeof(a) << endl;

		for (int i = 0; i < m; i++) {
			a[i] = new double [n];
		}
	}
	virtual ~Matrix() {
		for (int i = 0; i < m; i++) {
			delete[] a[i];
		}
		delete[] a;
	}
	void fill() {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				printf("a[%d][%d] = ", i, j);
				cin >> a[i][j];
			}
			//cout << endl;
		}
	}
	Matrix operator+(Matrix mt) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] += mt.a[i][j];
			}
		};
		return *this;
	}
	Matrix operator-(Matrix mt) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] -= mt.a[i][j];
			}
		}
	}
	void operator=(Matrix mt) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = mt.a[i][j];
			}
		}
	}
	void operator=(initializer_list <double> s) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = *s.begin() + n*i +j;
			}
		}
	}
	Matrix operator*(Matrix mt) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] += mt.a[i][j];
			}
		}
	}
	void print() {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
};


int main() {
	Matrix am(3, 2), bm(2, 2);
	cout << sizeof(am) << endl << sizeof(double);
	system("pause");
	am.fill();
	bm = {
		1,
		2,
		3
	};
	bm.print();
	system("pause");
	
	return 0;
}
