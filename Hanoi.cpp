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
int main()
{
    cin >> n;
    a = 'X';
    b = 'Z';
    c = 'Y';
    hanoi(n, a, c, b);
}

