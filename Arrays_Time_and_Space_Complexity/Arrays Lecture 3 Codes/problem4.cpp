#include <iostream>

using namespace std;


    void findPairs(int arr[],int size){
        for(int i = 0; i<size;i++){
            for(int j = 0; j<size;j++){
                for(int k=0;k<size;k++){
                     cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
                }
            }
            cout<<endl;
        }
    }




int main(){

// Problem 4: print triplet pair all values given in an array.

    int arr[] = {10,20,30,40};
    int size = 4;


    findPairs(arr,size);


    return 0;
}