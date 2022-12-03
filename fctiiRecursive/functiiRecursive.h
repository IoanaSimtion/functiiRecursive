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


//TEMA 03 decembrie 2022


void f21(char c) {
	if (c > 'A') {
		f21(c - 1);
	}
	cout << c;
	if (c > 'A') {
		f21(c - 1);
	}
}


int suma(int a, int b) {
	if (a == 0 && b == 0) {
		return 0;
	}
	else {
		if (a == 0) {
			return 1 + suma(a, b - 1);
		}
		else {
			return 1 + suma(a - 1, b);
		}
	}
}


int f23(int n) {
	if (n <= 9) {
		return 0;
	}
	if (n % 4 == 0) {
		return 0;
	}
	return 1 + f23(n - 3);
}


int f24(int n) {
	if (n <= 0) {
		return -1;
	}
	if (n % 2 == 0) {
		return 0;
	}
	if (n % 3 == 0) {
		return 0;
	}
	return 1 + f24(n - 10);
}


void afis(int n) {
	cout << n << endl;
	for (int i = n / 2; i >= 1; i--) {
		if (n % i == 0) {
			afis(i);
		}
	}
}


void scrie(int  x, int y) {
	cout << x << ' ' << y << endl;
	if (x < y) {
		scrie(x + 1, y - 1);
		cout << (x + y) / 2 << endl;
	}
}


int f27(int x, int y) {
	if (x < y) {
		return 1 + f27(x + 1, y);
	}
	if (y < x) {
		return 1 + f27(x, y + 1);
	}
	return 1;
}


void p(int x) {
	cout << x << endl;
	if (x != 0) {
		p(x / 10);
		cout << x % 10 << endl;
	}
}