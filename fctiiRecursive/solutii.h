#pragma once
#include "functiiRecursive.h"

//03 decembrie 2022



//1. cate cifre are; cate cifre pare si cate impare

void sol1() {
	int n = 2223457;
	cout << n << " are " << nrCifre(n) << " cifre: " << endl;
	cout << nrCifrePare(n) << " cifre pare si " << nrCifreImpare(n) << " cifre impare " << endl;
}


//2. sa se verifice daca n contine cifra x

void sol2() {
	int n = 1234129, x = 3;
	if (contineCifra(n, x) == 1) {
		cout << n << " contine cifra " << x << endl;
	}
	else {
		cout << n << " nu contine cifra " << x << endl;
	}
}


//3. sa se verifice daca toate cifrele lui n sunt identice

void sol3() {
	int n = 88888;
	if (cifreIdentice(n, n%10) == 1) {
		cout << n << " are toate cifrele identice" << endl;
	}
	else {
		cout << n << " nu are toate cifrele identice " << endl;
	}

	//cout << cifreIdentice(n);
}


//4. cea mai mare si cea mai mica cifra a lui n

void sol4() {
	int n = 8712, min = n % 10, max = n % 10;
	cout << "Cifra minima a numarului " << n << " este " << cifraMinima(n, min) << endl;
	cout << "Cifra maxima a numarului " << n << " este " << cifraMaxima(n, max) << endl;
}


//5. cea mai mare si cea mai mica cifra para a lui n

void sol5() {
	int n = 1234584, min = n % 10, max = n % 10;
	cout << "Cea mai mica cifra para din " << n << " este " << cifraMinimaPara(n, min) << endl;
	cout << "Cea mai mare cifra para din " << n << " este " << cifraMaximaPara(n, max) << endl;
}


//6. sa se afiseze sufixele lui n

void sol6() {
	int n = 8659, suf=0, p=1;
	cout << "Sufixele numarului " << n << " sunt: " << endl;
	sufixe(n, suf, p);
}


//7. sa se afiseze prefixele lui n

void sol7() {
	int n = 8659, pref = 0, p = 1;
	cout << "Prefixele numarului " << n << " sunt: " << endl;

}