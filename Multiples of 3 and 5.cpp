#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int limit = 1000;
    int sum = 0;
    for (int i=1; i<limit; i++) {
        if (i%3==0 || i%5==0)
            sum += i;
    }
    cout << sum << endl;

    return 0;
}