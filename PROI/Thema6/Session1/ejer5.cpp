#include <iostream>
#define MAXCAD 5

using namespace std;

void lerCadea (char mensaxe[ ], char cad []);
int lerEnteiro (char mensaxe []);

int sumarDirecta (int a1, int d, int n);
int sumarFormula (int a1, int d, int n);
int calcularTermoN (int a1, int d, int n);

int main()
{
    int a1, d, n;

    cout << "Demostracion da formula dunha serie aritmetica" << endl;
    a1 = lerEnteiro ("Primeiro termo da serie: ");
    d = lerEnteiro ("Valor da diferencia: ");
    n = lerEnteiro ( "Numero de termos para sumar: ");
    cout << "Suma directa: " << sumarDirecta (a1, d, n) << endl;
    cout << "Suma formula: " << sumarFormula(a1, d, n) << endl;

    return 0;
}

int sumarDirecta (int a1, int d, int n)
{
    int s, tn;
    tn = a1;
    for (int i = 1; i <= n; i++) {
        s += tn;
        tn += d;
    }

    return s;
}

int sumarFormula (int a1, int d, int n)
{
    return n * (a1 + calcularTermoN (a1, d, n)) / 2;
}

int calcularTermoN (int a1, int d, int n)
{
    int tn = a1;

    for (int i = 1; i <= n; i++) {
        tn += d;
    }
}

void lerCadea(char mensaxe[ ], char cad [])
{
    cout << mensaxe;
    cin.getline (cad, MAXCAD - 1);
}

int lerEnteiro (char mensaxe [])
{
    char cad [MAXCAD];
    lerCadea (mensaxe, cad);
    return atoi (cad);
}