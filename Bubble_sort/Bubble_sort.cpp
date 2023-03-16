// Bubble_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int a[20];                              //Deklarasi array a dengan ukuran 20
int n;                                  //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array 

void input() {                          // procedure untuk input 
    while (true) {                      // Looping 
        cout << "Masukan banyaknya elemen pada array : ";   //Output ke layar 
        cin >> n;                       // Input dari pengguna
        if (n <= 20)                    // Jika n kurang dari atau sama dengan 20 
            break;                      // Keluar dari loop 
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen, \n";   // Output ke layar 
        }
    }
    cout << endl;
    cout << "===========================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "===========================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> a[i];
    }
}
void bubbleSortArray() {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}



int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
