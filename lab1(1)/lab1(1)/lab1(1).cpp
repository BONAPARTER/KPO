#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m, a;
    unsigned long long result, del, del_2;
    cin >> n;
    cin >> m;
    cin >> a;

    del = n / a;
    if (n % a != 0)
    {
        del++;
    }

    del_2 = m / a;

    if (m % a != 0)
    {
        del_2++;
    }

    result = del * del_2;
    cout << "Результат: " << result << endl;
}
