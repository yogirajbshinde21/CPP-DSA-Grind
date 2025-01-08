#include <iostream>
#include <vector>

using namespace std;


void moveNegativeAtLeft(int nums[],int n){
    int i = 0;     // it will place the negative numbers.
    int j = 0;     // it will iterate and find negative elements.

    while(j<n){
        if(nums[j]>=0){
            j++;
        }
        else{
            swap(nums[j],nums[i]);
            j++;
            i++;
        }
    }
    


    //printing final vector
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";      
    }
}



int main(){

    // Problem: Moving All negative numbers to the left side of an array.

    int nums[] = {1,2,-3,4,-5,6,0,-12};   // -3 -5 -12 4 2 6 0 1 

    int n = sizeof(nums)/sizeof(int); //Gives length of array

    moveNegativeAtLeft(nums,n);







    return 0;
}