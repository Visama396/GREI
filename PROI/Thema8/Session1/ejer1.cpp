#include <iostream>
#include "time.h"

#define SIZE 100

using namespace std;

int main()
{
    srand(time(NULL));
    int v[SIZE];
    int pares = 0;

    for (int i = 0; i < SIZE; i++)
    {
        int num = rand() % 500;
        if (num % 2 == 0) pares++;
        v[i] = rand() % 500;
    }

    cout << "Hay " << pares << " numeros pares." << endl;
    cout << "Hay " << SIZE - pares << " numeros impares." << endl;
}