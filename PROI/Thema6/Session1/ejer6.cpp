#include <iostream>
#define MAXCAD 5

using namespace std;

void lerCadea (char mensaxe[ ], char cad []);
int lerEnteiro (char mensaxe []);

void invertirValores (int &a, int &b);
void ordenarValores (int &a, int &b, int &c);

int main() {
    int num1, num2, num3;

    cout << "Ordenar tres valores de maior a menor" << endl;
    num1 = lerEnteiro ("Valor 1: ");
    num2 = lerEnteiro ("Valor 2: ");
    num3 = lerEnteiro ("Valor 3: ");

    cout << "Valores orixinais: " << num1 << ", " << num2 << ", " << num3 << endl;

    ordenarValores (num1, num2, num3);

    cout << "Valores ordenados: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}

//Hai que pasar todos os valores por referencia
void invertirValores (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void ordenarValores (int &a, int &b, int &c)
{
    int orden = 1;

    while (orden > 0)
    {
        if (a > b)
        {
            invertirValores(a, b);
            orden++;
        }
        if (b > c)
        {
            invertirValores(b, c);
            orden++;
        }
        if (a > c)
        {
            invertirValores(a, c);
            orden++;
        }

        orden--;
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