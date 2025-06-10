#include <iostream>
#include <exception>
//untuk obyek exeption yang akan digunakan 
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; //penanda 1:
    try{
        array<int, 3> data = {10, 20, 30};
        //int data[3] = {10, 20, 30}
        //pesan array interger 3 elemen
        cout << data.at(5) << endl;
        //memanggil array elemen ke 5
    }
}