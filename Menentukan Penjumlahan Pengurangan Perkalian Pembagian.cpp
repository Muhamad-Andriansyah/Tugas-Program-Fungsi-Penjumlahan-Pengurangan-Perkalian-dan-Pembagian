#include<iostream>
using namespace std;

int Penjumlahan(){
    int a,b;
    cout<<"\n Penjumlahan";
    cout<<"\n Masukkan Nilai Bilangan a = ";
    cin>>a;
    cout<<"\n Masukkan Nilai Bilangan b = ";
    cin>>b;
    cout<<"\n Hasil Penjumlahan = "<<a+b;
}
int Pengurangan(){
    int a,b;
    cout<<"\n Pengurangan";
    cout<<"\n Masukkam Nilai Bilangan a = ";
    cin>>a;
    cout<<"\n Masukkan Nilai Bilangan b = ";
    cin>>b;
    cout<<"\n Hasil Pengurangan = "<<a-b;
}
int Perkalian(){
    int a,b;
    cout<<"\n Perkalian";
    cout<<"\n Masukkan Nilai Bilangan a = ";
    cin>>a;
    cout<<"\n Masukkan Nilai Bilangan b = ";
    cin>>b;
    cout<<"\n Hasilnya Perkalian = "<<a*b;
}
int Pembagian(){
    int a,b;
    cout<<"\n Pembagian";
    cout<<"\n Masukkan Nilai Bilangan a = ";
    cin>>a;
    cout<<"\n Masukkan Nilai Bilangan b = ";
    cin>>b;
    cout<<"\n Pembagian = "<<a/b;
}
int main(){
    cout<<endl;
    Penjumlahan();
    Pengurangan();
    Perkalian();
    Pembagian();
    cout<<endl;
    return 0;
}
