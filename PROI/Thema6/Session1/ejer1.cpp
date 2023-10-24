#include <iostream>
#include <stdlib.h>

using namespace std;

void escribirCarta(int n);
void escribirPau(int n);

int main()
{
    int n, pau;
    cout << "Programa para xear aleatoriamente unha carta da baralla espanola" << endl;
    srand(time(NULL));
    n = rand() % 10 + 1;
    pau = rand() % 4 + 1;

    escribirCarta(n);
    escribirPau(pau);

    return 0;
}

void escribirCarta(int m)
{
    switch(m)
    {
        case 10:
            cout << "Rei de ";
            break;
        case 9:
            cout << "Cabalo de ";
            break;
        case 8:
            cout << "Sota de ";
            break;
        case 7:
            cout << "Sete de ";
            break;
        case 6:
            cout << "Seis de ";
            break;
        case 5:
            cout << "Cinco de ";
            break;
        case 4:
            cout << "Catro de ";
            break;
        case 3:
            cout << "Tres de ";
            break;
        case 2:
            cout << "Dous de ";
            break;
        case 1:
            cout << "As de ";
    }
}

void escribirPau(int n)
{
    switch(n)
    {
        case 1:
            cout << "ouros" << endl;
            break;
        case 2:
            cout << "copas" << endl;
            break;
        case 3:
            cout << "espadas" << endl;
            break;
        case 4:
            cout << "bastos" << endl;
    }
}