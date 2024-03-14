
#include <iostream>
using namespace std;
extern double* duplicateArray(double* array, int size);
int main() {
    double originalArray[] = {1.2,2.4,3.5,4.6,7.8};
    int size = 5;
    double* newArr = duplicateArray(originalArray, size);
    cout << "New array is: "<<endl;
    for (int i = 0; i < size; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;
    delete[] newArr;

    return 0;
}
