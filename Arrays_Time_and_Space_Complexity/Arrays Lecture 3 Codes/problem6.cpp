#include <iostream>

using namespace std;


void shiftArray(int arr[],int size){
    int temp = arr[size-1];
        for(int i=size-1;i>=0;i--){
            if(i==0){
                arr[i]=temp;
            }
            else{
                arr[i]=arr[i-1];
            }
        }

        //Printing an array
        for(int i=0; i<size;i++){
            cout<<arr[i]<<" ";
        }
    }




int main(){

// Problem 6: Right Shift array elements by 1.

    int arr[] = {10,20,30,40,50,60};      // 60 10 20 30 40 50 
    int size = 6;


    shiftArray(arr,size);


    return 0;
}