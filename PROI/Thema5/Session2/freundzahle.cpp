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

int addTeilern(int num, int div = 1, int summe = 0)
{
    if (div >= num) return summe;

    if (num % div == 0)
    {
        summe += div;
    }

    return addTeilern(num, div + 1, summe);
}

bool sindFreunde(int num1, int num2)
{
    return (num1 == addTeilern(num2) && num2 == addTeilern(num1));
}

int main()
{
    cout << "Die Zahle 220 und 284 sind Freunde: " << sindFreunde(220, 284) <<  endl;

    return 0;
}