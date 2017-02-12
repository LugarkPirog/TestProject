#include "stdafx.h"
using namespace std;

class Matrix {
public:
	double **a;
	const int m, n;
	Matrix(int mm = 2, int nn = 2) : m(mm), n(nn) {
		a = new double *[m];
		for (int i = 0; i < m; i++) {
			a[i] = new double [n];
		}
	}
	Matrix(const Matrix &orig) : n(orig.n), m(orig.m){
		a = new double *[m];
		for (int i = 0; i < m; i++) {
			a[i] = new double[n];
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = orig.a[i][j];
			}
		};
	}
	~Matrix() {
		for (int i = 0; i < m; i++) {
			delete[] a[i];
		}
		delete[] a;
	}
	void fill() {
		cout << "Enter the matrix: \n";
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
			cout << endl;
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
	/*void operator=(initializer_list <double> s) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = *(s.begin() + n*i +j);
			}
		}
	}*/
	Matrix operator*(Matrix mt) {
		Matrix res(m, mt.n);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < mt.n; j++) {
				double sum = 0;
				for (int k = 0; k < n; k++) {
					sum += (a[i][k] * mt.a[k][j]);
				}
				res.a[i][j] = sum;
			}
		}
		return res;
	}
	void print() {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	Matrix T() {
		Matrix tmp(n, m);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				tmp.a[j][i] = a[i][j];
				}
			}
		return tmp;
		}
};

