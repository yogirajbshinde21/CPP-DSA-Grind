#include<iostream>
#include<limits>

using namespace std;


// Row-wise access
void print2DArray(int arr[][3], int row, int col){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


void ColumnWiseAccess(int arr[][4], int row, int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}



bool findTarget(int arr[][4],int row, int col, int target){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}



int findMax(int arr[][4], int row, int col){
    int maxAns = INT_MIN;

    for(int i=0; i<row;i++){
        for(int j=0;j<col;j++){
            if(maxAns<arr[i][j]){
                maxAns=arr[i][j];
            }
        }
    }

    return maxAns;

}

void rowSum(int arr[][4],int row, int col){


    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum = sum + arr[i][j];
        }

        cout<<"Sum of row "<<i<<": "<<sum<<endl;
    }
}



void columnSum(int arr[][4], int row, int col){

    for(int i=0;i<col;i++){
        int sum = 0;
        for(int j=0;j<row;j++){
            sum = sum + arr[j][i];
        }
        cout<<"Sum of column "<<i<<": "<<sum<<endl;
    }
}


void diagonalSum(int arr[][4], int row, int col){

    //Accessing each element in diagonal.
    int sum=0;
    for(int i=0;i<row;i++){
        sum = sum + arr[i][i];
    }


    cout<<sum;

}


void oppositeDiagonalSum(int arr[][4],int row,int col){

    // We will use the formula: (row-j-1,j)
    int sum = 0;
    for(int j = 0;j<col;j++){
            sum = sum + arr[row-j-1][j];
    }

    cout<<sum;
}


void matrixTranspose(int arr[][3],int row, int col){

    //Logic for transpose of matrix
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){       // Only traverse the upper triangular part
            swap(arr[i][j],arr[j][i]);
        }
    }


    // Printing matrix
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    // int arr[3][4];    // Created 2D Array


    // Initialization of 2D Array
    // int arr[3][4]{
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };


    // What if we don't specify number of rows?
    // It'll work!
    //     int brr[][4]{
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };


    // What if we don't specify number of columns?
    // It'll throw an error!
    // Why? Because C++ stores a 2D array in continuous memory blocks. 
    // To achieve this, C++ uses a formula to map the 2D array into a 1D array format: c * i + j, 
    // where 'c' is the total number of columns, 'i' is the row index, and 'j' is the column index.
    // So, it's important to know for C++ that what are total number of columns. but number of rows are not necessarily required.
    // Let's test it:

    //     int crr[][]{
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };  // --> Error, column size is required to specify.



    // What if we specify only row, but not columns?
    // --> Error, because Columns are mandatory to specify for creating 2D Array.
    //     int crr[3][]{
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };  // --> Error, column size is required to specify.



// -------------------------------------------------------------------

    // Now, let's create a 2D Array and print each element.

    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    // int row = 3;
    // int col = 4;

    // print2DArray(arr,row,col);   // This is Row wise access.
    // Output: 
    // 1 2 3 4 
    // 5 6 7 8
    // 9 10 11 12


    // ColumnWiseAccess(arr,row,col);
    // Output:
    // 1 5 9 
    // 2 6 10
    // 3 7 11
    // 4 8 12



// -------------------------------------------------------------------

    // Now, this is how we can take input for 2D Array:
    // int err[3][3];
    // int row = 3;
    // int col = 3;

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<"Enter the input for index: "<<i<<", column index: "<<j<<endl;
    //         cin>>err[i][j];
    //     }
    // }

    // print2DArray(err,row,col);


// -------------------------------------------------------------------


    // Problem: Searching of particular target in 2D Array
    //     int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12}
    // };

    // int row = 3;
    // int column = 4;
    // int target = 11;

    // bool check = findTarget(arr,row,column,target);

    // if(check){
    //     cout<<"Target found."<<endl;
    // }
    // else{
    //     cout<<"Target not found."<<endl;
    // }


// -------------------------------------------------------------------

    // Problem: Find the maximum element in the given 2D Array
    //     int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {11,75,9,12}
    // };

    // int row = 3;
    // int col = 4;

    // cout<<"Maximum number in given 2D Array: "<< findMax(arr,row,col)<<endl;    //75


// -------------------------------------------------------------------


    // problem : Row Wise Sum

    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {11,75,9,12}
    // };

    // int row = 3;
    // int col = 4;

    // rowSum(arr,row,col);

    
// -------------------------------------------------------------------


    // problem (HomeWork) : Column Wise Sum

    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {11,75,9,12}
    // };

    // int row = 3;
    // int col = 4;

    // columnSum(arr,row,col);


// -------------------------------------------------------------------

    // problem : Sum of Diagonal elements

    // int arr[4][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16}
    // };

    // int row = 4;
    // int col = 4;

    // diagonalSum(arr,row,col);    //34
    

// -------------------------------------------------------------------

    // problem (HomeWork) : Sum of Opposite Diagonal elements

    // int arr[4][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {17,14,15,16}
    // };

    // int row = 4;
    // int col = 4;

    // oppositeDiagonalSum(arr,row,col);  //38


// -------------------------------------------------------------------


    // Problem: Transpose of a Matrix

    int arr[3][3]={
        {2,4,6},
        {8,3,5},
        {7,9,1}
    };

    int row = 3;
    int col = 3;

    matrixTranspose(arr,row,col);









    return 0;

}