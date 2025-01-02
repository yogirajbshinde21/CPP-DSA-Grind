#include <iostream>

using namespace std;


    void sortArray(int arr[],int size){
        int left = 0, right = size-1;

        while(left<right){
            // logic: Increment left pointer until we get a 1, and Decrement right pointer until we get 0 and swap them.

            if(arr[left]==0){
                left++;
                continue;
            }

            if (arr[right]==1){
                right--;
                continue;
            }

            if (left<right){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
        }

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }




int main(){

// Problem 5 (HomeWork): Sort 0's and 1's in given array using Two pointer approach (METHOD 1).

    int arr[] = {0,1,0,1,1,0,0,0,0};
    int size = 9;


    sortArray(arr,size);


    return 0;
}