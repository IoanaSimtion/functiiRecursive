using namespace std;
#include <iostream>
#pragma once

int f(int a, int b) {
	if (b < 1) {
		return -1;
	}
	else {
		if (a % b == 0) {
			return 1 + f(a / b, b);
		}
		else {
			return 0;
		}
	}
}


void f2(long n) {
	if (n != 0) {
		if (n % 2 == 0) {
			cout << n % 10;
		}
		f2(n / 10);
	}
}


void f3(int n) {
	if (n != 0) {
		if (n % 2 == 0) {
			cout << n << ' ';
		}
		f3(n - 1);
	}
	else {
		cout << endl;
	}
}


int f4(long n, int k) {
	if (n != 0) {
		if (n % 10 == k) {
			return 1 + f4(n / 10, k);
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}


int f5(int n, int y) {
	if (n != 0) {
		y = y + 1;
		return y + f5(n - 1, y);
	}
	else {
		return 0;
	}
}


int f6(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n % 2 + f6(n / 2);
	}
}