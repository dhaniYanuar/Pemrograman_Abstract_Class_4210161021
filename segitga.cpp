#include "Segitiga.h"
#include "stdafx.h"
using namespace std;

Segitiga::Segitiga(int _tinggi, int _alas) {
	tinggi = _tinggi;
	alas = _alas;
}

int Segitiga::luas() {
	return 3.14*tinggi*alas;
}