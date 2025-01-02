#include <iostream>

using namespace std;


    void findtwoSum(int arr[],int size, int target){
        for(int left = 0; left<size;left++){
            for(int right = left+1; right<size;right++){    // Start at left + 1 because we cannot use the same element twice.
                if(arr[left]+arr[right]==target){
                    cout<<"("<<arr[left]<<","<<arr[right]<<")"<<" is the two sum pair!";
                }
            }
            cout<<endl;
        }
    }




int main(){

// Problem 3 (HomeWork): Two Sum problem.
// Your task is to find two distinct numbers in the array that add up to the target sum.
// There is exactly one solution.
// You may assume that each input would have exactly one solution.
// You cannot use the same element twice.


    int arr[] = {10,20,30,40};
    int size = 4;
    int target = 50;

    // Final Output:
    // (10,40) is the two sum pair!
    // (20,30) is the two sum pair!

    findtwoSum(arr,size,target);


    return 0;
}