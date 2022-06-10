#include <iostream>
#include <fstream>
#include "../base.h"
using namespace std;

void lib::input(){
  cout<<"===========================SELAMAT DATANG=========================\n";
  cout<<"||  JENIS KARYAWAN  ||        NAMA       ||     ALAMAT        ||    JENIS KELAMIN     ||\n";

for (int i = 0; i < 3; i++) {
  cout << "||    Developer     ||" << developer[0][i] << "     || " << developer[1][i]<<"||    "<<  developer[2][i] << " ||      " endl;
}
  
for (int i = 0; i < 3; i++) {
  cout << "||    Admin         ||" << admin[0][i] << "    ||   " << admin[1][i]<<"||      "<< admin[1][i] << " ||   " <<endl;
}
  
for (int i = 0; i < 3; i++) {
  cout << "|| Gudang        ||" << gudang[0][i] << "|| " << gudang[1][i]<<"||"<< gudang[2][i] << " || "endl;
}

for (int i = 0; i < 3; i++) {
  cout << "|| Sekretaris      ||" << sekretaris[0][i] << "|| " << sekretaris[1][i]<<"||"<< sekretaris[2][i] << ""||endl;
}
  
  cout<<"=========================================\n";
  cout<<"Masukan Nama Anda : ";
  getline(cin, namams);
  cout<<"Masukan NIM Anda : ";
  getline(cin, nim);
  cout<<"===========================================\n";
  cout<<"Masukan Nama Karyawan yang ingin anda cari : ";
  getline(cin, cari);
}

void lib::output() {
  cout << "\n=================HASIL PENCARIAN=================";
  cout << "\nJenis Karyawan    : " <<jeniskaryawan;
  cout << "\nNama              : " <<nama;
  cout << "\nAlamat            : " <<alamat;
  cout << "\nJenis Kelamin     : " <<jeniskelamin;
  cout<<"\n===================================================\n";
}