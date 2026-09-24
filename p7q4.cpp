#include <iostream>
using namespace std;

int main(){
    float set[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float *p = set;
    cout << "Forward Direction: ";
    for (int i = 0; i < 10; i++){
        cout << *(p+i) << " ";
    }
    cout << "\nBackward Direction: ";
    for (int i = 9; i >= 0; i--){
        cout << *(p+i) << " ";
    }
    float sum = 0;
    for (int i = 0; i < 10; i++){
        sum += *(p+i);
    }
        cout << "\nSum: " << sum;

return  0;
}