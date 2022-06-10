#ifndef _BASE_H
#define _BASE_H

#include <iostream>

using namespace std;

class lib {

private:
	string namams, nim, cari, jenis;
  string jeniskaryawan, nama, alamat, jeniskelamin;
  string developer[3][3], admin[3][3], gudang[3][3], sekretaris[3][3];
  int hasil;
int j;
		
public:
  void input();
  void output();

  void deklarasidata();
  void caridata();
};

void lib::input(){
  cout<<"===========================SELAMAT DATANG=========================\n";
  cout<<"||  JENIS KARYAWAN  ||        NAMA       ||     ALAMAT        ||    JENIS KELAMIN     ||\n";
cout << endl;
cout << "Developer\n";
for(int i = 0; i<3; i++){
	for (j=0; j<3; j++){
		cout << "           ";
		cout << developer[i][j];
	}
	cout <<endl;
}
cout << "Admin\n";
for(int i = 0; i<3; i++){
	for (j=0; j<3; j++){
		cout << "           ";
		cout << admin[i][j];
	}
	cout <<endl;
}
cout << "Gudang\n";
for(int i = 0; i<3; i++){
	for (j=0; j<3; j++){
		cout << "           ";
		cout << gudang[i][j];
	}
	cout <<endl;
}
cout << "Sekretaris\n";
for(int i = 0; i<3; i++){
	for (j=0; j<3; j++){
		cout << "           ";
		cout << sekretaris[i][j];
	}
	cout <<endl;
}

  cout<<"===========================================\n";
  cout<<"Masukan Nama Karyawan yang ingin anda baca : ";
  cin >> cari;
}

void lib::output() {
  cout << "\n=================HASIL PENCARIAN=================";
  cout << "\nJenis Karyawan    : " <<jeniskaryawan;
  cout << "\nNama              : " <<nama;
  cout << "\nAlamat            : " <<alamat;
  cout << "\nJenis Kelamin     : " <<jeniskelamin;
  cout<<"\n===================================================\n";
}

void lib::deklarasidata() {
	
	cout << "Masukkan Data Developer : \n";
	cout << "1. Nama  || Alamat   || Jenis Kelamin\n";
	for (int i = 0; i <3; i++){
		cout << endl;
		for(int j = 0; j<3; j++){
			cout <<"("<<j<<")"; cin>>developer[i][j];
		}
	}
  
  	cout << "Masukkan Data Admin : \n";
	cout << "1. Nama  || Alamat   || Jenis Kelamin\n";
	for (int i = 0; i <3; i++){
		cout << endl;
		for(int j = 0; j<3; j++){
			cout <<"("<<j<<")"; cin>>admin[i][j];
		}
	}
  
  	cout << "Masukkan Data Gudang : \n";
	cout << "1. Nama  || Alamat   || Jenis Kelamin\n";
	for (int i = 0; i <3; i++){
		cout << endl;
		for(int j = 0; j<3; j++){
			cout <<"("<<j<<")"; cin>>gudang[i][j];
		}
	}
  
  	cout << "Masukkan Data Developer : \n";
	cout << "1. Nama  || Alamat   || Jenis Kelamin\n";
	for (int i = 0; i <3; i++){
		cout << endl;
		for(int j = 0; j<3; j++){
			cout <<"("<<j<<")"; cin>>sekretaris[i][j];
		}
	}
  

}

void lib::caridata() {
  for (int i = 0; i < 3; i++) {
  	for (int j = 0; j < 3; j++){
	  
    if (cari == developer[i][j]) {
      jeniskaryawan = "Developer";
      nama = developer[i][j];
      alamat = developer[i][j+1];
      jeniskelamin = developer[i][j+2];
    } 
    else if (cari == admin[i][j]) {
      jeniskaryawan = "Admin";
      nama = admin[i][j];
      alamat = admin[i][j+1];
      jeniskelamin = admin[i][j+2];
    } 
    else if (cari == gudang[i][j]) {
      jeniskaryawan = "Gudang";
      nama = gudang[i][j];
      alamat = gudang[i][j+1];
      jeniskelamin = gudang[i][j+2];
    }
    else if (cari == sekretaris[i][j]){
      jeniskaryawan = "Sekretaris";
      nama = sekretaris[i][j];
      alamat = sekretaris[i][j+1];
      jeniskelamin = sekretaris[i][j+2];
  }
    }
  }
}

#endif