#include <iostream>
#define MAXSTR 20

using namespace std;

void stringLesen(char const *nachricht, char const *str)
{
    cout << nachricht;
    cin.getline(str, MAXSTR);
}

int intLesen(char const *nachricht)
{
    char str[MAXSTR];
    stringLesen(nachricht, str);

    return atoi(str);
}

int potenz(int grundzahl, int hochzahl)
{
    if (hochzahl == 0)
    {
        return grundzahl;
    }
    else
    {
        return grundzahl * potenz(grundzahl, --hochzahl);
    }
}

int main()
{
    int grundzahl;
    int hochzahl;

    grundzahl = intLesen("Schreib die Grundzahl: ");
    hochzahl = intLesen("Schreib die Hochzahl: ");

    cout << grundzahl << "^" << hochzahl << " = " << potenz(grundzahl, hochzahl) << endl;

    return 0;
}