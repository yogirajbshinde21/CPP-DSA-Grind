#include <iostream>
#include <vector>

using namespace std;




int main(){

// ------------------------------------------------------------------------
    //2D vector 
    // vector<vector<int>>arr(5,vector<int>(10,0));

    // // printing 2D vector

    // // row size -> arr.size()
    // for(int i=0;i<arr.size();i++){
    //     // column size in each row -> arr[i].size()
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Output: 
    // 0 0 0 0 0 0 0 0 0 0 
    // 0 0 0 0 0 0 0 0 0 0
    // 0 0 0 0 0 0 0 0 0 0
    // 0 0 0 0 0 0 0 0 0 0
    // 0 0 0 0 0 0 0 0 0 0



// ------------------------------------------------------------------------

    // Jagged Array:
    // A jagged array is a 2D array where the number of columns in each row can be different. 
    // Unlike a traditional 2D array with a fixed structure, a jagged array allows rows to have varying lengths.

    vector<vector<int>> brr;  //2D vector array created.

    vector<int> vect1(10,0); 
    vector<int> vect2(5,23); 
    vector<int> vect3(9,6); 
    vector<int> vect4(5,3); 
    vector<int> vect5(8,2); 

    brr.push_back(vect1);
    brr.push_back(vect2);
    brr.push_back(vect3);
    brr.push_back(vect4);
    brr.push_back(vect5);

    for(int i=0;i<brr.size();i++){
        for(int j=0;j<brr[i].size();j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    


    return 0;

}