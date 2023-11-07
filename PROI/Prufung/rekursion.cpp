#include <iostream>

using namespace std;

int lange(int n)
{
    if (n < 10)
    {
        return 1;
    }

    return lange(n/10) + 1;
}

int quersumme(int n)
{
    if (n < 10)
    {
        return n % 10;
    }

    return quersumme(n/10) + quersumme(n%10);
}

int main()
{
    for (int i = 0; i <= 1000; i++)
    {
        if (quersumme(i) + lange(i) == 13) cout << i << " ";
    }

    cout << endl;

    return 0;
}