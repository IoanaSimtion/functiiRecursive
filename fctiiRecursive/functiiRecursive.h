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


//03 decembrie 2022

//todo functie ce determina cate cifre are un numar

int nrCifre(int n) {
	if (n == 0) {
		return 0;
	}
	return 1 + nrCifre(n / 10);
}

//todo functie ce determina cate cifre pare are un numar

int nrCifrePare(int n) {
	if (n == 0) {
		return 0;
	}
	if (n % 2 == 0) {
		return 1 + nrCifrePare(n / 10);
	}
	return nrCifrePare(n / 10);
}

//todo functie ce determina cate cifre impare are un numar

int nrCifreImpare(int n) {
	if (n == 0) {
		return 0;
	}
	if (n % 2 == 1) {
		return 1 + nrCifreImpare(n / 10);
	}
	return nrCifreImpare(n / 10);
}

//todo functie ce verifica daca un numar contine cifra x

bool contineCifra(int n, int x) {
	if (n == 0) {
		return 0;
	}
	if (n % 10 == x) {
		return 1;
	}
	return contineCifra(n / 10, x);
}

//todo functie ce verifica daca toate cifrele lui n sunt identice

bool cifreIdentice(int n, int cifra) {
	if (n == 0) {
		return true;
	}
	if (n % 10 != cifra) {
		return false;
	}
	cifreIdentice(n / 10, cifra);
}

//todo functie ce returneaza cea mai mica cifra a numarului

int cifraMinima(int n, int& min) {
	if (n == 0) {
		return min;
	}
	if (n % 10 < min) {
		min = n % 10;
	}
	cifraMinima(n/10, min);
}

//todo functie ce returneaza cifra maxima a lui n

int cifraMaxima(int n, int& max) {
	if (n == 0) {
		return max;
	}
	if (n % 10 > max) {
		max = n % 10;
	}
	cifraMaxima(n / 10, max);
}

//todo functie ce returneaza cifra minima para a lui n

int cifraMinimaPara(int n, int& min) {
	if (n == 0) {
		return min;
	}
	if (n % 10 < min && (n % 10) % 2 == 0) {
		min = n % 10;
	}
	cifraMinimaPara(n / 10, min);
}

//todo functie ce returneaza cifra maxima para a lui n

int cifraMaximaPara(int n, int& max) {
	if (n == 0) {
		return max;
	}
	if (n % 10 > max && (n % 10) % 2 == 0) {
		max = n % 10;
	}
	cifraMaximaPara(n / 10, max);
}

//todo functie ce afiseaza sufixele unui numar

void sufixe(int n, int& suf, int& p) {
	if (n != 0) {
		suf = suf + (n % 10) * p;
		p *= 10;
		cout << suf << ' ';
		sufixe(n / 10, suf, p);
	}
}

//todo functie ce returneaza oglinditul unui numar

int oglindit(int n,int nou) {
	if (n == 0) {
		return nou;
	}
	return  oglindit(n / 10, nou * 10 + n % 10);
}

//todo functie ce afiseaza prefixele unui numar

void prefixe(int n, int pref) {
	if (n != 0) {
		pref = pref * 10 + (n % 10);
		cout << pref << ' ';
		prefixe(n / 10, pref);
	}
}

//todo functie ce afiseaza cifra de rang k

int cifraRangK(int n, int k, int ct) {
	if (ct == k) {
		return n % 10;
	}
	cifraRangK(n/10, k, ct + 1);
}

//todo functie ce elimina cifra de rang k

int nrNouEliminareK(int n, int k, int m, int ct, int p) {
	if (n == 0) {
		return m;
	}
	if (ct == k) {
		n /= 10;
	}
	m = m + (n % 10) * p;
	nrNouEliminareK(n / 10, k, m, ct + 1, p * 10);
}

//todo functie ce elimina prima si ultima cifra a unui numar

int elimPrimaUltimaC(int n, int m, int p) {
	if (p == 1) {
		n /= 10;
	}
	if (n <= 9) {
		return m;
	}
	m = m + (n % 10) * p;
	elimPrimaUltimaC(n / 10, m, p * 10);
}


//todo functie ce verifica daca numarul are aspect babab

bool babab(int n) {
	if (nrCifre(n) == 2) {
		return true;
	}
	if (n % 10 != (n / 100) % 10) {
		return false;
	}
	babab(n / 10);
}

//todo functie ce verifica daca cifrele lui n sunt in ordine crescatoare

bool cifreCresc(int n) {
	if (n < 10) {
		return true;
	}
	if (n % 10 < (n / 10) % 10) {
		return false;
	}
	cifreCresc(n / 10);
}

//todo functie ce verifica daca cifrele lui n sunt in ordine descrescatoare

bool cifreDescresc(int n) {
	if (n < 10) {
		return true;
	}
	if (n % 10 > (n / 10) % 10) {
		return false;
	}
	cifreDescresc(n / 10);
}

//todo functie ce verifica daca cifrele lui n oscileaza

bool oscileaza(int n) {
	if (n == 0) {
		return true;
	}
	if (n % 10 == (n / 10) % 10) {
		return false;
	}
	if (n % 10 < (n / 10) % 10) {
		if ((n / 10) % 10 < (n / 100) % 10) {
			return false;
		}
	}
	if (n % 10 > (n / 10) % 10) {
		if ((n / 10) % 10 > (n / 100) % 10) {
			return false;
		}
	}
	oscileaza(n / 10);
}