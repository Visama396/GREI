#include <iostream>

#define SIZE 100

using namespace std;

int main()
{
    int arr[SIZE];

    int j = 2;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = j;
        j += 2;
    }

    int num = -1;

    do 
    {
        cout << "Introduce un numero entre 1 y 10: ";
        cin >> num;
    } while (num < 1 || num > 10);

    cout << "Voy a mostrar los multiplos de " << num << " que esten en el vector: ";

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % num == 0)
        {
            cout << arr[i] << " ";
        } 
    }

    cout << endl;

    return 0;
}