#include<iostream>
using namespace std;
extern double arrayMin(double* array, int size);
int main(){
    int size=5;
    double array[5]={1.2,2.4,3.5,4.6,7.8};
    cout<<"The minimum value found is: "<<arrayMin(array,5)<<endl;






    return 0;
}