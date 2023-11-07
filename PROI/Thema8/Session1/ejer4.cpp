#include <iostream>
#define CODIGOS 10

using namespace std;

void menu(int &option);
void insertar(int n, int arr[CODIGOS], int &numCodigos);
void borrar(int n, int arr[CODIGOS], int &numCodigos);
void ordenar(int arr[CODIGOS]);

int main()
{
    int codigos[CODIGOS] = {1234, 1579, 2468, 2976, 0, 0, 0, 0, 0, 0};
    int numCodigos = 0;
    int option;

    menu(option);
    int codigo = 0;

    do 
    {
        switch(option) {
            case 1:
                do
                {
                    cout << "Escribe un codigo nuevo para introducir (tiene que ser de 4 cifras): ";
                    cin >> codigo;
                } while (codigo < 1000 || codigo > 9999);
                
                insertar(codigo, codigos, numCodigos);
                menu(option);
                break;
            case 2:
                do
                {
                    cout << "Escribe el codigo que quieras borrar: ";
                    cin >> codigo;
                } while (codigo < 1000 || codigo > 9999);
                
                borrar(codigo, codigos, numCodigos);
                menu(option);
                break;
            case 3:
                cout << "Cerrando programa..." << endl;
                break;
        }
    } while (option != 3);

    return 0;
}

void insertar(int n, int arr[CODIGOS], int &numCodigos)
{
    if (numCodigos == CODIGOS)
    {
        cout << "No hay espacio para anadir mas codigos." << endl;
    }
    else
    {
        for (int i = 0; i < CODIGOS; i++)
        {
            if (arr[i] == 0) 
            {
                cout << "Va en la posicion " << i << endl;
                arr[i] = n;
            }
        }
    }
}

void borrar(int n, int arr[CODIGOS], int &numCodigos)
{

}

void menu(int &option)
{
    do
    {
        cout << "Que quieres hacer [1] Insertar codigo, [2] Borrar codigo, [3] Cerrar programa: ";
        cin >> option;
    } while (option < 0 || option > 3);
}