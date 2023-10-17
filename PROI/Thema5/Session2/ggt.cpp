#include <iostream>
#define MAXSTR 20

using namespace std;

void stringLesen(char nachricht[], char str[])
{
    cout << nachricht;
    cin.getline(str, MAXSTR);
}

int intLesen(char nachricht[])
{
    char str[MAXSTR];
    stringLesen(nachricht, str);

    return atoi(str);
}

// Rechnen der größter gemeinsamer Teiler
int ggt(int num1, int num2)
{
    int r = num1 % num2;

    if (r == 0)
    {
        return num2;
    }
    else
    {
        return ggt(num2, r);
    }
}

int main()
{
    int num1;
    num1 = intLesen("Schreib eine Zahl: ");
    int num2;
    num2 = intLesen("Schreib noch mal eine Zahl: ");

    if (num1 > num2)
    {
        mcd(num1, num2);
    }
    return 0;
}