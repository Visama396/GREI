#include <iostream>
#define MAXCAD 5

using namespace std;

void lerCadea (char mensaxe[ ], char cad []);
int lerEnteiro (char mensaxe []);
float lerReal (char mensaxe []);

float calcularNotaMedia(float &mediatotal, int &cont);

int main()
{
    char resp;
    float mediatotal = 0;
    int cont = 0;
    cout << "Programa para calcular a nota media do alumnado dunha clase" << endl;
    do {
        calcularNotaMedia(mediatotal, cont);
        cout << mediatotal << endl;
        cout << "Queres introducir mais notas (s) ou non (n)? " << endl;
        cin >> resp;
    } while (resp == 's');

    return 0;
}

void calcularNotaMedia(float &mediatotal, int &cont)
{
    float nota;

    cout << "Introduce a nota de cada estudante (para parar introduce valor negativo)" << endl;
    do{
        nota = lerReal ("Introduce nota: ");
        if (nota >= 0)
        {
            media += nota;
            cont++;
        }

    } while (nota >= 0);
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

float lerReal (char mensaxe [])
{
    char cad [MAXCAD];
    lerCadea (mensaxe, cad);
    return atof (cad);
}

