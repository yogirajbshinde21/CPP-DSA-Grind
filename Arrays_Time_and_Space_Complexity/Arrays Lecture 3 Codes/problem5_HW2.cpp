#include <iostream>

using namespace std;


void sortArray(int arr[],int size){
        int count0 = 0, count1 = 0;
        for(int i = 0; i<size;i++){
            if(arr[i]==0){
                count0 +=1;
            }
            else{
                count1 +=1;
            }
        }

        int i;
        for(i=0; i<count0;i++){
            arr[i]=0;
        }

        for(int j=i;j<size;j++){
            arr[j]=1;
        }

        for(int i = 0; i<size;i++){
            cout<<arr[i]<<" ";
        }
       
    }




int main(){

// Problem 5 (HomeWork): Sort 0's and 1's in given array using Counting of 0 and 1 (METHOD 2).

    int arr[] = {0,1,0,1,1,0,0,0,0};
    int size = 9;


    sortArray(arr,size);


    return 0;
}