#include <iostream>


using namespace std;


void fun(int arr[], int n){

    cout<<"Array elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    // Static memory allocation of array
    // int arr[5] = {1,2,3,4,5};


    // Dynamic memory allocation
    int n;
    cin>>n;
    int *arr = new int[n];   //Initially, each element would be 0, or garbage.


    // taking n element input in array
    // 0 index -> 4 index 
    for(int i=0;i<n;++i){
        int data;
        cin>>data;
        arr[i]=data; 
    } //  -> 0 index to 4 index 


    // let's try try to insert more elements.
    // This error output for the below code is showing in online compilor, not in VS code -  malloc(): corrupted top size, Aborted
    // Solution: We will use vector STL as shown in next file 
    for(int i=0; i<10;++i){
        arr[n+i] = 80;
    } //  -> 5 index to 14 index 

    fun(arr,n);

}