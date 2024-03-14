#include<iostream>
using namespace std;
extern void modifyArray(double* array, int size, double value);
int main(){
    int size=5;
    double array[5]={1.2,2.4,3.5,4.6,7.8};
    double value =1.2;
     modifyArray(array,size,value );
    cout<<"The new array is: "<<endl;
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";

    }
    cout<<endl;





    return 0;
}