// Arrays Level 1


#include <iostream>
#include <limits>    //here, used this to calculate minimum and maximum number.

using namespace std;


// void printArray(int arr[], int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;
//     cout<<"printed in solve() function.";
// }


// bool linearSearch(int a[], int size, int target){
//     bool flag = false;
//     for(int i=0; i<size;i++){
//         if(a[i]==target){
//             flag = true;
//         }
//     }

//     return flag;
// }


// void countZeroOne(int arr[],int size){
//     int count_one = 0;
//     int count_zero = 0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==1){
//             count_one+=1;
//         }
//         else{
//             count_zero+=1;
//         }
//     }

//     cout<<count_one<<endl;
//     cout<<count_zero<<endl;
// }



// void findMinimumInArray(int arr[],int size){
//     int minAns = INT_MAX;

//     for(int i=0; i<size;i++){
//         minAns = min(arr[i],minAns);
//     }

//     cout<<minAns;
// }


// void reverseArray(int arr[],int size){
//     int left = 0;
//     int right = size-1;

//     while(left<right){    
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }

//     for(int i = 0; i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }



void extremePointInArray(int a[],int size){
    for(int left=0,right=size-1;left<=right;left++,right--){
        cout<<a[left]<<" ";

        if (left!=right){
            cout<<a[right]<<" ";
        }
    }
}


int main(){


    int a[6] = {10,20,30,40,50,60};  //Logic working for even and odd number of length of array.
    int size= 6;

    extremePointInArray(a,size);

    // reverseArray(a,size);



    // int arr[5] = {21,234,132,35,12};
    // int size = 5;

    // findMinimumInArray(arr,size);

    // Minimum number in an Array
    // cout<<INT_MIN<<endl;     //   -2147483648 = -2^(31)
    // cout<<INT_MAX<<endl;     //    2147483647 =  2^(31) - 1




    // Count zero and one in an array.
    // int a[] = {0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,1,1,0,1,0,0,0,1,1,0,1,1,1,1,0,0,1,0,1,0,1,1,1,0,0,0,1,1,1,1,0};
    // int size = 56;

    // countZeroOne(a,size);


    // int arr[5] = {21,234,132,35,12};
    // int size = 5;
    // int target = 35;

    // // printArray(arr,size);

    // bool result = linearSearch(arr,size,target);

    // if (result){
    //     cout<<"target found!";
    // }
    // else{
    //     cout<<"Target not found!";
    // }







// int arr[100];


// cout<<"Array created successfully";


    // int a = 5;
    // cout<<"Size of a: "<<sizeof(a)<<endl;   //4
    // cout<<"Address of a :"<<&a<<endl;    //0xbbb53ffbdc


    // int arr[10];
    // cout<<"Size of array arr: "<<sizeof(arr)<<endl;  // 10*4 = 40 bytes

    // //Both of the below lines gives base address.
    // cout<<"Base address of arr: "<<&arr<<endl;
    // cout<<"Base address of arr: "<<arr<<endl;  


    // Various ways to initialize an array:
    // int arr[] = {1,3,2,4,23,46};

    // int brr[5] = {123,24,345,23,54};

    // int crr[5] = {2,5};
    // cout<<crr[0]<<endl;
    // cout<<crr[1]<<endl;
    // cout<<crr[2]<<endl;
    // cout<<crr[3]<<endl;
    // cout<<crr[4]<<endl;

    // int drr[2] = {2,5,234,35,34};   //error




    // int arr[5];
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<"Enter the value for index "<<i<<": ";
    //     cin>>arr[i];
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){
    // cout<<"Value at index "<<i<<" is: "<<arr[i];
    // cout<<endl;
    // }


    // 1st problem statement: Take 10 inputs in array and print them. 
    // int c[10];
    // int n=10;
    // for(int i=0; i<n;i++){
    //     cout<<"Enter value at index "<<i<<": ";
    //     cin>>c[i];
    //     c[i]=2*c[i];
    // }

    // for(int i=0;i<n;i++){
    //     cout<<"Value at index "<<i<<" is: "<<c[i];
    //     cout<<endl;
    // }



    // 2nd problem statement : Find the sum of all values in array
    // int a[5];
    // int sum=0;
    // for(int i=0;i<5;i++){
    //     cin>>a[i];
    //     sum+= a[i];
    // }

    // cout<<sum;



    // 3rd problem statement : Linear Search in an Array to find value 6 in an array.
    // int a[6] = {2,4,6,8,10,12};
    // int target=10;
    // bool flag = 0;
    // for(int i=0; i<6;i++){
    //     if(a[i]==target){
    //         flag = 1;
    //     }
    // }

    // if (flag==1){
    //     cout<<"Target found!"<<endl;
    // }
    // else{
    //     cout<<"Target Not Found!"<<endl;
    // }

    return 0;
}

