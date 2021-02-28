#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int N;
    cin >> N;
    int r = rand() % N;
    cout << r << endl;
    return 0;
}
