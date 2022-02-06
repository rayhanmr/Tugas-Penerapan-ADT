#include <iostream>
using namespace std;

int main(){
    cout << "=================================================================================" << endl;
    cout << "| PROGRAM MENGHITUNG BANGUN DATAR PERSEGI PANJANG, PERSEGI, TRAPESIUM, SEGITIGA |" << endl;
    cout << "=================================================================================\n" << endl;


    cout << "=======PERSEGI PANJANG=======\n" << endl;
    double p,l; // integer p sebagai nilai panjang dan l sebagai nilai lebar persegi panjang

    cout << "Nilai panjang : ";
    cin >> p;
    cout << "Nilai lebar : ";
    cin >> l;

    cout << "\n";

    double LuasPersegiPanjang = p*l;
    double KelilingPersegiPanjang = (2*p)+(2*l);

    cout << "Luas Persegi Panjang = p x l" << endl;
    cout << "Luas = " << p << " x " << l << " = " << LuasPersegiPanjang << "\n"<< endl;

    cout << "Keliling Persegi Panjang = 2(p) + 2(l)" << endl;
    cout << "Keliling = " << "2(" << p << ")" << " + " << "2(" << l << ")" << " = " << KelilingPersegiPanjang << "\n" << endl;



    cout << "=======PERSEGI=======\n" << endl;
    double s; // integer s sebagai nilai sisi dari persegi karena setiap sisi persegi memiliki panjang yang sama

    cout << "Nilai sisi = ";
    cin >> s;

    double LuasPersegi = s*s;
    cout << "Luas persegi = s x s" << endl;
    cout << "Luas = " << s << " x " << s << " = " << LuasPersegi << "\n" << endl;

    double KelilingPersegi = s+s+s+s;
    cout << "Keliling persegi = 4(s)" << endl;
    cout << "Keliling persegi = " << "4("<< s << ")" << " = " << KelilingPersegi << "\n" << endl;



    cout << "=======TRAPESIUM=======\n" << endl;
    double a,b; // variabel a dan b sebagai sisi yang sejajar dari trapesium
    double c,d,f,g; // nilai c, d, dan f sebagai panjang sisi dari trapesium yang akan digunakan untuk mencari keliling trapesium
    double t; // variabel nilai tinggi dari trapesium
    double z = 0.5;

    cout << "Nilai a = ";
    cin >> a;
    cout << "Nilai b = ";
    cin >> b;
    cout << "Nilai t = ";
    cin >> t;
    cout << "Nilai c = ";
    cin >> c;
    cout << "Nilai d = ";
    cin >> d;
    cout << "Nilai f = ";
    cin >> f;
    cout << "Nilai g = ";
    cin >> g;

    cout << "\n";

    double LuasTrapesium = z*t*(a+b);
    cout << "Luas trapesium = 1/2 x t(a+b)" << endl;
    cout << "Luas = " << z << " x " << t << "(" << a << " + " << b << ") = " << LuasTrapesium << "\n" << endl;

    double KelilingTrapesium = a+b+c+d;
    cout << "Keliling trapesium = c + d + f + g" << endl;
    cout << "Keliling = " << c << " + " << d << " + " << f << " + " << g << " = " << KelilingTrapesium << "\n" << endl;



    cout << "=======SEGITIGA=======\n" << endl;
    double skr,skn; // variabel skr dan skn digunakan untuk input nilai sisi kanan dan kiri yang digunakan untuk menghitung keliling segitiga

    cout << "Nilai alas = ";
    cin >> a;
    cout << "Nilai tinggi = ";
    cin >> t;
    cout << "Nilai sisi kiri = ";
    cin >> skr;
    cout << "Nilai sisi kanan = ";
    cin >> skn;

    cout << "\n";

    double LuasSegitiga = z*a*t;
    cout << "Luas segitiga = 1/2 x a x t" << endl;
    cout << "Luas = " << z << " x " << a << " x " << t << " = " << LuasSegitiga << "\n" << endl;

    double KelilingSegitiga = a+skr+skn;
    cout << "Keliling segitiga = a x sisi kiri + sisi kanan" << endl;
    cout << "Keliling = " << a << " + " << skr << " + " << skn << " = " << KelilingSegitiga << endl;

    return 0;
}
