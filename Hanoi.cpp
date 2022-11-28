#include <iostream>
using namespace std;
int n;
char a, b, c;
void hanoi(int n, char a, char c, char b)
{
    if (n == 1)
        cout << a << "->" << c << endl;
    else
    {
        hanoi(n - 1, a, b, c);
        cout << a << "->" << c << endl;
        hanoi(n - 1, b, c, a);
    }
}
int mutari(int n, int c)
{
    if (n == 0)
        return 1;
    else
        return c * mutari(n - 1, c);
}
int main()
{
    cout << "Dati numarul de discuri: ";
    cin >> n;
    a = 'X';
    b = 'Z';
    c = 'Y';
    cout << "Numarul de mutari este: " << mutari(n, 2) - 1 << endl;
    cout << "Mutarile sunt: " << endl;
    hanoi(n, a, c, b);
}