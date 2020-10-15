#include <iostream>
#include <cmath>

using namespace std;
    
int main() 
{
    long n;
    int i=0, max, sum=0;

    cin >> n;

    max = (0.5 * (int(log10(n) + 1)));

    while (i < max) 
    {
        sum += n % 10;
        n /= 10;
        i++;
    }

    cout << sum;

    return 0;
}