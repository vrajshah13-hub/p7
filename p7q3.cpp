#include <iostream>
using namespace std;

void inverse(int a[][2]) {
    int det = a[0][0] * a[1][1] - a[0][1] * a[1][0];  

    if (det == 0) {
        cout << "Matrix is singular; inverse does not exist." << endl;
        return;
    }

    double inv[2][2];
    inv[0][0] =  a[1][1] / (double)det;
    inv[0][1] = -a[0][1] / (double)det;
    inv[1][0] = -a[1][0] / (double)det;
    inv[1][1] =  a[0][0] / (double)det;

    cout << inv[0][0] << " " << inv[0][1] << endl;
    cout << inv[1][0] << " " << inv[1][1] << endl;
}

int main() {
    int a[2][2];
    cout << "Enter elements of 2x2 matrix" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    inverse(a);
    return 0;
}