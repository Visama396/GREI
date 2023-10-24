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

float floatLesen(char nachricht[])
{
    char str[MAXSTR];
    stringLesen(nachricht, str);
    return atof(str);
}