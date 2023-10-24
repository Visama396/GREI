#include <iostream>
#define MAXCAD 5

using namespace std;

void lerCadea(char mensaxe[], char cad[]);
float lerEnteiro(char mensaxe[]);

int calcularMaior(int a, int b, int c);
int main()
{
    int a, b, c;

    cout << "Programa para calcular o maior de tres numeros" << endl;
    a = lerEnteiro("Introduce numero 1 ");
    b = lerEnteiro("Introduce numero 2 ");
    c = lerEnteiro("Introduce numero 3 ");

    cout << a << " " << b << " " << c << endl;
    cout << "Maior: " << calcularMaior(a, b, c) << endl;

    return 0;
}

int calcularMaior(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

void lerCadea(char mensaxe[], char cad[])
{
    cout << mensaxe;
    cin.getline(cad, MAXCAD - 1);
}

float lerEnteiro(char mensaxe[])
{
    char cad[MAXCAD];
    lerCadea(mensaxe, cad);
    return atoi(cad);
}