// Fibonacci with Memoization:
#include <bits/stdc++.h>
using namespace std;

int fib(int n, int F[])
{
    if (n <= 1)
    {
        F[n] = n;
        return F[n];
    }

    if (F[n] == -1)
    {
        F[n] = fib(n - 1, F) + fib(n - 2, F);
    }

    return F[n];
}

int main()
{
    int n;
    cin >> n;
    int F[n + 1];
    memset(F, -1, sizeof(F));

    int result = fib(n, F);

    cout << result << endl;

    return 0;
}
