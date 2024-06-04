#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int hitungVokal(const string &kalimat)
{
    int jumlahVokal = 0;
    for (char huruf : kalimat)
    {
        
        char lowerHuruf = tolower(huruf);
        
        if (lowerHuruf == 'a' || lowerHuruf == 'e' || lowerHuruf == 'i' || lowerHuruf == 'o' || lowerHuruf == 'u')
        {
            jumlahVokal++;
        }
    }
    return jumlahVokal;
}
int main()
{
    string kalimat;
   
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    int jumlahVokal = hitungVokal(kalimat);

    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlahVokal << endl;

    return 0;
}