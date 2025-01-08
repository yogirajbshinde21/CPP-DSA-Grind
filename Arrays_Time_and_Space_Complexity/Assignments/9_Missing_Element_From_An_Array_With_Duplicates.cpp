// Problem : Missing Element From An Array With Duplicates

#include <iostream>

using namespace std;

void findMissing(int a[], int n){

    for(int i=0;i<n;i++){
        int index = abs(a[i]);

        if(a[index-1]<0){        // index-1, because size of array is n, and the range of array is [1,n], so accessibility will be index-1.
            continue;
        }
        else{
            a[index-1]*= -1;
        }
    }

    //Now to check for the element which is not visited yet (i.e. positive element)
    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout<<i+1<<" is missing."<<endl;
        }
    }
}

int main(){


    int a[] = {1,3,5,3,4};    // 2 is missing.

    int n = sizeof(a)/sizeof(int); //Gives length of array

    findMissing(a,n);







    return 0;
}