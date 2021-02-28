#include <iostream>
#include <math.h>

using namespace std;

bool SNT(int N) {
    if (N <= 1) return false;
    for (int i = 2; i <= sqrt(N); i++)
        if (N % i == 0) return false;
    return true;
}

int main()
{
    int N;
    cin >> N;
    for (int i = 2; i <= N; i++) {
        if (SNT(i)) cout << i << ' ';
    }
    return 0;
}
