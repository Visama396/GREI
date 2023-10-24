#include <iostream>
#define MAXCAD 5

using namespace std;

void lerCadea(char mensaxe[], char cad[]);
int lerEnteiro(char mensaxe[]);
float lerReal(char mensaxe[]);

float calcularNotaMedia();

int main()
{
    cout << "Nota media do alumnado da clase" << endl;
    cout << calcularNotaMedia() << endl;

    return 0;
}

float calcularNotaMedia()
{
    float nota, media = 0;
    int cont = 0;

    cout << "Introduce a nota de cada estudante" << endl;

    do
    {
        nota = lerReal("Introducir nota: ");

        if (nota >= 0)
        {
            media += nota;
            cont++;
        }

    } while (nota >= 0);

    return media/cont;
}

void lerCadea(char mensaxe[ ], char cad [])
{
    cout << mensaxe;
    cin.getline(cad, MAXCAD - 1);
}

int lerEnteiro (char mensaxe [])
{
    char cad [MAXCAD];
    lerCadea (mensaxe, cad);
    return atoi (cad);
}

float lerReal(char mensaxe[])
{
    char cad[MAXCAD];
    lerCadea(mensaxe, cad);
    return atof(cad);
}