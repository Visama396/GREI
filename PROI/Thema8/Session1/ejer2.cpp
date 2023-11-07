#include <iostream>

#define SIZE 10

using namespace std;

void fillArray(float arr[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }
}

int main(int argc, char const *argv[])
{
    float arr1[SIZE];
    float arr2[SIZE];

    cout << "Introduce 10 numeros para guardar en un array: ";
    fillArray(arr1);

    cout << "Introduce otros 10 numeros para otro array: ";
    fillArray(arr2);

    int j = SIZE - 1;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr1[i] + arr2[j] << " = " << arr1[i] << " + " << arr2[j] << endl;
        j--;
    }

    return 0;   
}

