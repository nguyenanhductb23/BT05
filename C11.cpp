#include <iostream>

using namespace std;

string nhiPhan (int N) {
    string str = "";
    while (N > 0) {
        int dig = N % 2;
        str = (char)(dig + 48) + str;
        N = N / 2;
    }
    return str;
}

int thapPhan (string np) {
    int dec = 0, len = np.length();
    for (int i = 0; i < len; i++) {
        dec = 2 * dec + (int)(np[i]-48);
    }
    return dec;
}

int main()
{
    int N;
    string np;
    //cin >> N;
    cin >> np;
    //cout << nhiPhan(N);
    cout << thapPhan(np);
    return 0;
}