#pragma once
#include "BangunDatar.h"
using namespace std;

class Persegi : public bangun_datar {
private:
	int panjang;
	int lebar;
public:
	Persegi(int _panjang, int _lebar);
	int luas();
};
