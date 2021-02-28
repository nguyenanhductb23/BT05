#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

void dividedBy25(int r[], int N) {
    const int NUM = 25;
    for (int i = 0; i < N-2; i++)
        for (int j = i+1; j < N-1; j++)
            for (int k = j+1; k < N; k++)
                if ((r[i]+r[j]+r[k]) % NUM == 0)
                    cout << r[i] << ' ' << r[j] << ' ' << r[k] << endl;
}

int main()
{
    const int MAX = 50;
    int N;
    cin >> N;
    int r[N];
    for (int i = 0; i < N; i++) {
        srand(i*time(0));
        r[i] = rand() % MAX;
    }
    dividedBy25(r, N);
    return 0;
}
