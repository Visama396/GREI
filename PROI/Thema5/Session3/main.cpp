#include <iostream>
#include "kombinatorik.h"
#include "lesen.h"

using namespace std;

int main()
{
    int option, result, m, n;
    cout << "1. Variationen" << "\n2. Kombinationen" << "\n3. Permutationen" << "\n4. Ende" << endl;
    option = intLesen("Wählen Sie ein Option: ");

    if (option != 4)
    {
        switch(option)
        {
            case 1:
                cout << "Jetzt schreiben Sie zwei Zähle: ";
                cin >> m >> n;
                result = variationen(m, n);
                break;
            case 2:
                cout << "Jetzt schreiben Sie zwei Zähle: ";
                cin >> m >> n;
                result = kombinationen(m, n);
                break;
            case 3:
                cout << "Jetzt schreiben Sie eine Zahl: ";
                cin >> m;
                result = permutationen(m);
                break;
        }

        cout << "Factorial von 5: " << factorial(5) << endl;
        cout << ((option == 1)? "Variation ist " : (option == 2)? "Kombination ist " : "Permutation ist ") << result << endl;
        return 0;
    }
}