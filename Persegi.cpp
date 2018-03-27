#include "Persegi.h"
#include "stdafx.h"
using namespace std;

Persegi::Persegi(int _panjang, int _lebar) {
	panjang = _panjang;
	lebar = _lebar;
}

int Persegi::luas() {
	return panjang * lebar;
}