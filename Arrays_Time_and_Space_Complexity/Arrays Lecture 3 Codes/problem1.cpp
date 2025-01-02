#include <iostream>

using namespace std;



int getUnique(int arr[], int size){

    int result = 0;
    for(int i=0; i<size;i++){
        result = result^arr[i];
    }

    return result;
}



int main(){

// Problem 1: Find unique elements in a given array.
// TRICK: Use "XOR" logic to find unique value.
// In XOR logic, same inputs have output 0 and difference inputs have output 1.

    int arr[] = {10,2,45,34,45,9,20,10,34,20,2} ;  //unique element is: 9
    int size = 11;

    int finalAns = getUnique(arr,size);
    cout<<"Final answer is: "<<finalAns<<endl;




    return 0;
}