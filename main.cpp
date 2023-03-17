//muhammad noer kafabik(a11.2022.14443/4212)
#include <iostream>

using namespace std;

int main()
{
    cout << "penjumlahan dan pengurangan dua bilangan" << endl;
    cout << "========================================" << endl;
    cout<<endl;

    int a, b, x, y;
    cout << "inputkan angka pertama : ";
    cin >>a;
    cout << "inputkan angka kedua : ";
    cin >>b;
    x= a+b;
    y=a-b;
    cout << "hasil dari penjumlahan ==> ";
    cout <<a<<" + "<<b<<" = "<<x<< endl;
    cout << "hasil dari pengurangan ==>";
    cout <<a<<" - "<<b<<" = "<<y<< endl;

    cout << "===============================================" << endl;
    cout << "           jumlah & rata-rata array            " << endl;
    float z[4];
    float j,t,r;
    for(int i=1; i<=4; i++){
        cout << "masukkan array ke " << i << " : ";
        cin >> z[i];
        t= t+z[i];
    }
    j= sizeof(z)/sizeof(z[0]);
    r= t/j;
    cout << "jumlah total isi array : " << t << endl;
    cout << "rata -rata isi array :" << r << endl;
    cout << " selesai pakde" << endl;
    return 0;
}
