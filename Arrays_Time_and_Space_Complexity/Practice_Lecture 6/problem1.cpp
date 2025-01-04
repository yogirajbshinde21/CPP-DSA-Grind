#include <iostream>
#include <vector>


using namespace std;

// void arrange(int arr[], int n) {
//     int left = 0;         // Pointer to the start of the array
//     int right = n - 1;    // Pointer to the end of the array

//     while (left < right) {
//         // If the element at 'left' is negative, it's already in the correct position
//         if (arr[left] < 0) {
//             left++;
//         }
//         // If the element at 'right' is positive, it's already in the correct position
//         else if (arr[right] > 0) {
//             right--;
//         }
//         // If 'left' points to a positive and 'right' points to a negative, swap them
//         else {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//         // Output: -11 -7 -10 12 23 40 60 
//     }
// }




void arrange(int arr[],int n){
    int left = 0;
    int right = 0;
    
    while(left<n){
        if(arr[left]<0){
            swap(arr[left],arr[right]);
            right++;
        }

        left++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       
    }
}

int main(){


    // Problem:- 
    // You need to rearrange an array such that:
    // All negative elements are on the left.
    // All positive elements are on the right.
    // The order of the elements within each group (negative/positive) does not matter.

    int arr[] = {23,-7,12,-10,-11,40,60};
    int n = 7;

    arrange(arr,n);





    return 0;
}