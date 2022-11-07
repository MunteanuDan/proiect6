#include <iostream>
using namespace std;

void suma(int a, int b)
{
    a = a + b;
}

void suma1(int* a, int b) {
    (*a) = (*a) + b;
}

void suma2(int& a, int b) {
    a = a + b;
}

long suma3(int a, int b) {
    return a + b;
}

long diferenta(int a, int b) {
    return a - b;
}

int main()
{
    int x = 5;
    int y = 3;
    suma(x, y); // transmiterea prin valoare
    cout << x<< endl; // afiseaza 5

    suma1(&x, y);   // transmiterea parametrilor prin adresa
                    // modificam valoarea de la acea adresa
    cout << x << endl; // afiseaza 8

    suma2(x, y); // transmiterea prin referinta, tot ramane modificata
    cout << x;  // afiseaza 11




    long(*pf)(int, int);
    pf = suma3;
    pf(5, 3); // returneaza 8
    pf = diferenta;
    pf(5, 3); // returneaza 2

}
