#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b;
    cin >> a >> b;
    int coins = 0;
    coins += max(a,b);
    if (a > b)
    {
        a--;
    }
    else 
    {
        b--;
    }
    coins += max(a,b);
    cout << coins << endl;
}