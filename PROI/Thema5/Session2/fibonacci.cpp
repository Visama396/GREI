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

int fib(int times)
{
    if (times == 1 || times == 2)
    {
        return 1;
    }
    else
    {
        return fib(times-1) + fib(times-2);
    }
}

int main()
{
    int times;
    times = intLesen("Bitte schreib wie viele Mal, willst du mir die Fibonacci Serien rechnen: ");
    if (times > 0)
    {
        for (int i = 1; i <= times; i++)
        {
            cout << fib(i) << " ";
        }
    }



    cout << endl;
    return 0;
}