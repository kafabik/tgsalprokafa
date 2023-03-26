#include <iostream>

using namespace std;

int main()
{
     int angka, jumlah, max, min;


       cout << " Mencari nilai Max dan Min " << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jumlah;
       cout << endl;

       for (int i = 1; i <= jumlah; i++) {

       cout << "Masukkan Angka       : "; cin >> angka;

       if ( i == 1 ) {
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
            else if ( max < angka) {
               max = angka;
           }
           else {}
           }

       cout << endl;
       cout << "Nilai Min           : " <<  min << endl;
       cout << "Nilai Max           : " <<  max << endl;

      cout << "=============================================="<< endl;

      cout <<"===============================================" <<endl;
       cout << "program fungsi is even dan is odd"<< endl;
        int n;

          cout << "Enter an integer: ";
          cin >> n;

          if ( n % 2 == 0)
            cout << n << " is even.";
          else
            cout << n << " is odd";
            cout<<endl;
        cout <<"==========================================="<< endl;
        int nilai=30, i;
    cout << "faktor dari " << nilai << " adalah : ";
    for(i=1; i <= nilai; i++) {
      if (nilai % i == 0)
      cout << i << " ";
   }
    cout<<endl;
        cout <<"============================================"<< endl;
        cout << "program c++ search array"<< endl;
        cout<<endl;

             int input[100], arr_count, num;

      cout << "Input jumlah element Array: ";
      cin >> arr_count;

      cout << "Input "<< arr_count << " angka (dipisah dengan enter): " ;
      cout << endl;

      // simpan setiap angka yang diinput ke dalam array
      for(i = 0; i < arr_count; i++){
        cin >> input[i];
      }

      cout << endl;

      cout << "Input angka yang akan dicari: ";
      cin >> num;

      // proses pencarian array
      for(i = 0; i < arr_count; i++){
        if(input[i] == num){
          cout << "Angka ditemukan pada index ke-" << i;
          break;
        }
      }

      if(i == arr_count){
        cout  << "Angka tidak ditemukan";
      }

      cout << endl;
      cout <<"==========================================" << endl;
      cout <<"program fungsi array max dan min" << endl;
      cout <<"program fungsi max dan min array" << endl;
       int arr[5], nmax, nmin;
      cout<<"Enter elements of array: ";
      for(i=0;i<5;i++)
      cin>>arr[i];
      cout<<"Your array is: ";
      for(i=0;i<5;i++)
      cout<<arr[i]<<"  ";
      max=arr[0];
      min=arr[0];
      for(i=0;i<5;i++)
      if(max<arr[i])
       max=arr[i];
      else if(min>arr[i])
       min=arr[i];
      cout<<"\nMaximum element of Array: "<<max;
      cout<<"\nMinimum element of Array: "<<min;
      cout<<endl;

      cout << "======================================" << endl;
      cout << "program sumeven dan sumodd" << endl;
      int sum1, sum2, even, odd;

    for(int i = 1; i<=20; i++){
    cout <<" masukkan nilai : " << endl;
    cout<<endl;
    cin>>n;
    if (n % 2 == 0 ){

        sum1=sum1+num;
        n = even;
    }
    else if (n % 2 != 0)
    {

        sum2=sum2+n;
        num = odd;
    }


    cout<<"Sum Even Number Is : "<<sum1<<endl;
    cout<<endl;
    cout<<"Sum Odd Number Is : "<<sum2<<endl;
    cout<<endl;
    break;
    }

    cout <<"=======================================" << endl;
    cout <<"program search c++"<< endl;
        int Nilai[20], N, Bilangan;
      bool ketemu;

      cout<<"Masukkan Banyaknya Bilangan = ";
      cin>>N;

      //Membaca elemen Array
      for(i=0; i<N; i++)
      {
        cout<<"Masukkan elemen ke-"<<i<<" = ";
        cin>>Nilai[i];
      }

      //Mencetak Elemen Array
      cout<<"\n\Deretan Bilangan = ";
      for(i=0; i<N; i++)
      cout<<Nilai[i]<<" ";

      cout<<"\n\nMasukkan Bilangan yang akan Dicari = ";
      cin>>Bilangan;

      //Melakukan Pencarian
      i=0;
      do
      {
        if(Nilai[i]==Bilangan)
        ketemu = true;
        i++;
      }
      while(!(ketemu));
      if(ketemu)
      cout<<"Bilangan "<<Bilangan<<" ditemukan";
      else
      cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
      cout<<endl;
      cout <<"========================================"<< endl;
      cout <<"program isfound c++" << endl;
          int x[5],y[4];

        int  a, b;{
            int p;
            p = a + b;
            cout << "X + Y = " << p;
        }
            cout << "X = ";
            cin >> x[5];
            cout << "Y = ";
            cin >> y[4];
            return 0;

}
