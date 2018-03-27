#pragma once
#include <iostream>
#include "BangunDatar.h"
using namespace std;

class Segitiga : public bangun_datar{
private :
	int tinggi;
	int alas;
public :
	Segitiga(int _tinggi, int _alas);
	int luas();
};
