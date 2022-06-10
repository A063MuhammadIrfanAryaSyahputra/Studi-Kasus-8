#include <iostream>

using namespace std;

class Stukas {

private:
	string nama, nim, cari, jenis;
  string hasilJenis, hasilJudul, hasilPenulis;
  string novel[2][3], komik[2][3], ensiklopedi[2][3];
  int hasil;
		
public:
  void input();
  void output();

  void deklarasiBuku();
  void cariBuku();
};
