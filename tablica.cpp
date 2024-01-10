#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));


    const int N = 10;
    const int X = 1;
    const int Y = 100;

   array<int, N> tablica;

   
    for (int i = 0; i < N; ++i) {
        tablica[i] = rand() % (Y - X + 1) + X;
    }

   
   cout << "Zawartosc tablicy:\n";
    for (int i = 0; i < N; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}
