#include<iostream>
using namespace std;
double* duplicateArray(double* array, int size){
double *newArr= new double[size];
for (int i=0;i<size;i++){
    newArr[i]=array[i];
}
return newArr;
    
}