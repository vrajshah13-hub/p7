#include <iostream>
using namespace std;

void sort(int a[], int n, bool ascending) {
    if (ascending) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    } else {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] < a[j + 1]) {  
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }
}

double median(int a[], int n){
    double median;
    if (n%2==0){
        int x = n/2;
        median = (a[x] + a[x-1])/2.0;
    }
    else{
        median = a[(n-1)/2];
    }
    cout << median;
    return median;
}

int main() {
    cout << "Enter number of elements: ";
    int n;
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool ascending;
    cout << "Sort ascending? (1 for yes, 0 for no): ";
    cin >> ascending;

    sort(a, n, ascending);

    cout << "\nSorted array:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << "Median of elements is ";
    median(a, n);

    return 0;
}