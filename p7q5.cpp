#include <iostream>
using namespace std;

int main() {
    int roll[5];
    float sub1[5], sub2[5], sub3[5];

    int *pRoll = roll;
    float *p1 = sub1;
    float *p2 = sub2;
    float *p3 = sub3;

    cout << "Enter roll number and marks in 3 subjects:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> *(pRoll + i)
            >> *(p1 + i)
            >> *(p2 + i)
            >> *(p3 + i);
    }

    float sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < 5; i++) {
        sum1 += *(p1 + i);
        sum2 += *(p2 + i);
        sum3 += *(p3 + i);
    }

    cout << "\nClass Average:\n";
    cout << "Subject 1 = " << sum1 / 5 << endl;
    cout << "Subject 2 = " << sum2 / 5 << endl;
    cout << "Subject 3 = " << sum3 / 5 << endl;
    cout << "\nAverage marks of each student:\n";

    for (int i = 0; i < 5; i++) {
        float avg = (*(p1 + i) + *(p2 + i) + *(p3 + i)) / 3;

        cout << "Roll No. " << *(pRoll + i)
             << " = " << avg << endl;
    }

    return 0;
}