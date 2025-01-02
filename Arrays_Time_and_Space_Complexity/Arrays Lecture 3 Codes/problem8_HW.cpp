#include <iostream>

using namespace std;


void shiftArray(int arr[],int size, int k){
    
    //Why we dynamically allocated the array on heap instead of just initializing normal empty array, because -
    // In C++, arrays with a variable size (like int arr[k] where k is determined at runtime) are not allowed in standard C++. 
    // The size of the array must be a constant expression determined at compile time.
    // int temp1[k]; //So, this gives error.
    int* temp = new int[k];         //Dynamically allocate the array on heap (runtime memory). but it is slower to access.


    // Getting last k elements in new array
    for(int i=0;i<k;i++){
        temp[i] = arr[size-k+i];
    }

     // Shift the remaining elements to the right
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Place the saved k elements at the beginning of the array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
        

        //Printing an array
        for(int i=0; i<size;i++){
            cout<<arr[i]<<" ";
        }


        // Not required; But best practice: 
        delete[] temp; // Free the memory on heap as memory was manually allocated.
    }




int main(){

// Problem 8 (homeWork): Right Shift array elements by 'k' number of times.

    int arr[] = {10,20,30,40,50,60,70};      // 60 70 10 20 30 40 50
    int size = 7;
    int k =2;


    shiftArray(arr,size,k);


    return 0;
}