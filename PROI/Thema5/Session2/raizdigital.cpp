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

int raizDigital(int num)
{
    if (num < 10)
    {
        return num;
    }
    else
    {
        return raizDigital(num/10 + num%10) ;
    }
}

int main()
{
    int num;
    num = intLesen("Schreib eine Zahl zwischen 1 und 99: ");
    cout << "Die digitalen Root von " << num << " ist " << raizDigital(num) << endl;
    return 0;
}