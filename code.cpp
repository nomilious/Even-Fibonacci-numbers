#include <iostream>
#include <cmath>
using namespace std;
int fibonaci(int);
int main() {
    int sum=0, k, max = 4*pow(10, 6);
    for (int i=1; ;i++) {
        if ((k = fibonaci(i)) > max)
            break;
        if (!(k % 2))
            sum+=k;
    }
    cout << "Sum:\t" << sum << endl;
    return 0;
}
int fibonaci(int n) {
    if (n <= 1)
        return n;
    return fibonaci(n-1) + fibonaci(n-2);
}
