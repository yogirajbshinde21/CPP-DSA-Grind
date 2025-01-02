#include <iostream>

using namespace std;


    void findPairs(int arr[],int size){
        for(int left = 0; left<size;left++){
            for(int right = 0; right<size;right++){
                cout<<"("<<arr[left]<<","<<arr[right]<<")";
            }
            cout<<endl;
        }
    }




int main(){

// Problem 2: print pair all possible pairs of values given in an array.

    int arr[] = {10,20,30};
    int size = 3;


    findPairs(arr,size);


    return 0;
}