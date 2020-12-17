/*
DADA function definitions
*/

#include <iostream>
#include <cmath>
#include "dada.h"
using std::cout, std::endl, std::abs, std::sqrt;

int amax(const double x[], const unsigned int len) {
    //TODO: student implement code here
	if (len == 0) {
		return -1;
	}
	double y[10000];
	int leng = len;
	for (int i = 0; i < leng; ++i) {
		double holder;
		holder = x[i];
		if (holder < 0) {
			holder = holder *-1;
		}
		y[i] = holder;
	}
	double maxNum = y[0];
	int maxIndex = 0;
	for (int i = 0; i < leng; ++i) {
		if(y[i] > maxNum) {
			maxNum = y[i];
			maxIndex = i;
			
		}
		
	}
	
    return maxIndex;
}

double asum(const double x[], const unsigned int len) {
    //TODO: student implement code here
	double y[10000];
	int leng = len;
	for (int i = 0; i < leng; ++i) {
		//cout << x[i] << " ";
		double holder;
		holder = x[i];
		if (holder < 0) {
			holder = holder *-1;
		}
		y[i] = holder;
	}
	
	double sumA = 0;
	//int z = 0;
	for (int i = 0; i < leng; ++i) {
		//cout << y[i] << " ";
		double digit = y[i];
		sumA = sumA + digit;
		//++z;
	}
	//cout << z << endl;
	return sumA;
}

void axpy(const double a, const double x[], double y[], const unsigned int len) {
    //TODO: student implement code here
	int leng = len;
	for (int i = 0; i < leng; ++i) {
		y[i] = (a * x[i]) + y[i];
	}
}
void copy(const double src[], double dest[], const unsigned int len) {
    //TODO: student implement code here
	int leng = len;
	for (int i = 0; i < leng; ++i) {
		dest[i] = src[i];
	}
}

double dot(const double x[], const double y[], const unsigned int len) {
    //TODO: student implement code here
	int leng = len;
	double sumD = 0;
	for (int i = 0; i < leng; ++i) {
		int holder = 0;
		holder = x[i] *y[i];
		sumD = sumD + holder;
	}
    return sumD;
}

double norm2(const double x[], const unsigned int len) {
    //TODO: student implement code here
	int leng = len;
	double sumN = 0;
	for (int i = 0; i < leng; ++i) {
		sumN = sumN + (x[i] * x[i]);
	}
	sumN = sqrt(sumN);
	return sumN;
}

void scale(const double a, double x[], const unsigned int len) {
    //TODO: student implement code here
	int leng = len;
	for (int i = 0; i < leng; ++i) {
		x[i] = a * x[i];
	}
}

void swap(double x[], double y[], const unsigned int len) {
    //TODO: student implement code here
	int leng = len;
	for (int i = 0; i < leng; ++i) {
		double holder = x[i];
		x[i] = y[i];
		y[i] = holder;
	}
}
/*
int main() {
	double x[2] = {2,2};
	//double y[2] = {3,2};
	int a = 2;
	cout << norm2(x,a) << endl;
	return 0;
}
*/