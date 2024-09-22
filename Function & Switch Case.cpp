#include <iostream>
using namespace std;

float kubus(float a) {
	float b = a*a*a;
return b; 
}

float balok(float c, float d, float e) {
	float f = c*d*e;
return f; 
}

float tabung (float g, float h) {
	float i = (g*g)*h;
return i; 
}

float bola(float j) {
	float k = (j*j*j);
return k;
}

int main() {
	float z = 3.14;
	float x = (4.0/3.0);
	float a,b,c,d,e,f,g;
	int y;
	do	{
		cout << endl;
		cout <<"\t--- Menu Menghitung Volume ---\n";
		cout << endl;
		cout <<"1. Kubus\n" <<"2. Balok\n";
		cout <<"3. Tabung\n"<<"4. Bola\n"<<"5. Exit\n";
		cout << endl;
		cout << "Ingin Hitung Volume Apa? : ";
		cin >> y;
		cout << endl;
	switch (y) {
	case 1:
		cout <<"Menghitung Volume Kubus\n";
		cout <<"Nilai Sisi = "; cin >>a;
		cout << "Volume = "<< kubus(a);
		cout << endl; 
		break;
	case 2:
		cout <<"Menghitung Volume Balok\n";
		cout <<"Nilai Panjang = "; cin >>b;
		cout <<"Nilai Lebar = "; cin >>c;
		cout <<"Nilai Tinggi = "; cin >>d;
		cout << "Volume= "<< balok(b,c,d);
		cout << endl; 
		break;
	case 3:
		cout <<"Menghitung Volume Tabung\n";
		cout << "Nilai Jari - Jari = "; cin >> e;
		cout <<"Nilai Tinggi = "; cin >> f;
		cout << "Volume= "<< z*tabung(e,f);
		cout << endl; 
		break;
	case 4:
		cout <<"Menghitung Volume Bola\n";
		cout << "Nilai Jari - Jari = "; cin >> g;
		cout << "Volume= "<< x*z*bola(g);
		cout << endl; 
		break; } 
	} while (y!=5);
		cout << "Terimakasih";
		cout << endl;
return 0; 
}