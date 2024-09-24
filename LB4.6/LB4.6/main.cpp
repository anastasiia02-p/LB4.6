#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double P, E;
    int n, k;

    // 1) while(...) { ... while(...) { ... } ... };
    P = 1;
    n = 1;
    while (n <= 20) 
    {
        E = 0;
        k = n;
        while (k <= 20) {
            E += k;
            k++;
        }
        P *= (n * n + E * E) / (n + 1);
        n++;
    }
    cout << P << endl;

    // 2) do{... do{...} while(...) ...} while(...);
    P = 1;
    n = 1;
    do
    {
        E = 0;
        k = n;
        do {
            E += k;
            k++;
        } while (k <= 20);
        P *= (n * n + E * E) / (n + 1);
        n++;
    } while (n <= 20);
    cout  << P << endl;

    // 3) for(...; ...; n++) { ... for(...; ...; k++) { ... } ... };
    P = 1;
    for (n = 1; n <= 20; n++) 
    {
        E = 0;
        for (k = n; k <= 20; k++) 
        {
            E += k;
        }
        P *= (n * n + E * E) / (n + 1);
    }
    cout  << P << endl;

    // 4) for(...; ...; n--) { ... for(...; ...; k--) { ... } ... };
    P = 1;
    for (n = 20; n >= 1; n--) 
    {
        E = 0;
        for (k = 20; k >= n; k--) 
        {
            E += k;

        }
        P *= (n * n + E * E) / (n + 1);
    }
    cout  << P << endl;

    return 0;
}
