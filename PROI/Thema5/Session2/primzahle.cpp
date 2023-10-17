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

bool isPrimzahl(int num, int teiler)
{
    if (teiler < num)
    {
        if (num % teiler != 0)
        {
            isPrimzahl(num, ++teiler);
        }
        else
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    cout << "5 ist primzahl: " << isPrimzahl(5, 1) << endl;
    return 0;
}