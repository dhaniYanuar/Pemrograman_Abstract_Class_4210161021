#include "Lingkaran.h"
#include "stdafx.h"
#include <iostream>
using namespace std;

Lingkaran::Lingkaran(int _jari) {
	jari = _jari;
}

int Lingkaran::luas() {
	return 3.14f *jari *jari;
}

