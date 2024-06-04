#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int binarySearch(const string &str, char target)
{
    int left = 0;
    int right = str.length() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (str[mid] == target)
        {
            return mid; 
        }
        else if (str[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1; 
}
int main()
{
    string kalimat;
    char huruf;

    
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

   
    sort(kalimat.begin(), kalimat.end());


    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    
    int posisi = binarySearch(kalimat, huruf);

    
    if (posisi != -1)
    {
        cout << "Huruf \"" << huruf << "\" ditemukan pada posisi " << posisi + 1 << " dari kalimat." << endl;
    }
    else
    {
        cout << "Huruf \"" << huruf << "\" tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}