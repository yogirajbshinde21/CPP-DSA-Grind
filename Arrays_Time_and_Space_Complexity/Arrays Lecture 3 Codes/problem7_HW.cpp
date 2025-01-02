#include <iostream>

using namespace std;


void shiftArray(int arr[],int size){
    int temp = arr[0];
       
       for(int i=0;i<size-1;i++){    //taken i<size-1 because temp value will be inserted later at i=size-1.
        arr[i]=arr[i+1];
       }

       arr[size-1]=temp;



        //Printing an array
        for(int i=0; i<size;i++){
            cout<<arr[i]<<" ";
        }
    }




int main(){

// Problem 6: Left Shift array elements by 1.

    int arr[] = {10,20,30,40,50,60};      // 20 30 40 50 60 10 
    int size = 6;


    shiftArray(arr,size);


    return 0;
}