#pragma once
#include <iostream>
#include "BangunDatar.h"
using namespace std;

class Lingkaran : public bangun_datar{
private:
	int jari;
public:
	Lingkaran(int _jari);
	int luas();
};

