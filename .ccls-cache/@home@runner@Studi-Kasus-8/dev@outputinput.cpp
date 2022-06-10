#include <iostream>
#include "../base.h"
using namespace std;

void Stukas::input(){
  cout<<"===========================SELAMAT DATANG=========================\n";
  cout<<"========================DI PERPUSTAKAAN UAD=======================\n";
  cout<<"||  JENIS BUKU  ||        JUDUL BUKU        ||  PENULIS         ||\n";

  
for (int i = 0; i < 3; i++) {
  cout << "||    Novel     ||" << novel[0][i] << "    || " << novel[1][i]<<"||"<< endl;
}
  
for (int i = 0; i < 3; i++) {
  cout << "||    KOMIK     ||" << komik[0][i] << "    || " << komik[1][i]<<"||"<< endl;
}
  
for (int i = 0; i < 3; i++) {
  cout << "|| Ensiklopedi  ||" << ensiklopedi[0][i] << "|| " << ensiklopedi[1][i]<<"||"<< endl;
}
  
  cout<<"=========================================\n";
  cout<<"Masukan Nama Anda : ";
  getline(cin, nama);
  cout<<"Masukan NIM Anda : ";
  getline(cin, nim);
  cout<<"===========================================\n";
  cout<<"Masukan judul buku yang ingin anda baca : ";
  getline(cin, cari);
}

void Stukas::output() {
  cout << "\n=================HASIL PENCARIAN=================";
  cout << "\nJenis Buku    : " <<hasilJenis;
  cout << "\nJudul Buku    : " <<hasilJudul;
  cout << "\nPenulis       : " <<hasilPenulis;
  cout<<"\n===================================================\n";
}