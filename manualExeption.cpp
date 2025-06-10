#include <iostream>
using namespace std;

int main()
{
    try{
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 5; //melemparkan sebuah interger maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a){
        //blok ini akan dieksekusi
        cout << "Pengecualian akan di eksekusi" << endl;
    }
    catch(...){
        /*jika selain interger maka block ini akan di eksekusi*/
        cout << "default Pengecualian diexekusi" << endl;
    }

    return 0;
    
}