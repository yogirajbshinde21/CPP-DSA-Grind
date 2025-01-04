#include <iostream>
#include <vector>

using namespace std;



void print(vector<int>v){
    int size = v.size();  //gives the size of vector.

    cout<<"Printing size of vector: "<<v.size()<<endl;

    cout<<"Printing vector: "<<endl;
    for(int i=0; i<size;i++){

        // We can use any of the following method to print.

        // cout<<v[i]<<" ";   //method 1 to print
        cout<<v.at(i)<<" ";   //2nd method to print
    }

    cout<<endl;
    cout<<endl;
}


// Another method for printing elements in vector
void print2(vector<int>v){

    cout<<"Printing vector method 2: "<<endl;
    for(auto it:v){
        cout<<it<<' ';
    }

    cout<<endl;
}

int main(){

// ---------------------------------------------------------------------
    // Vector Initialization
    vector<int>arr;        // default with no data, 0 size.

    vector<int>arr2(5,-1); // Initiate with 5 size with specific data.
    // print(arr2);           // -1 -1 -1 -1 -1
    // arr2.push_back(20);
    // print(arr2);

    // vector<int> arr3 = {1,2,3,4,5};
    // arr3.pop_back();
    // print(arr3);

    // vector<int> arr4 {1,2,3,4,5,6};
    // print(arr4);

// -------------------------------------------------------------------

    //How to copy vector
    // e.g. copying the data of vector arr5 in vector arr6. 
    // vector<int>arr5{1,2,3,4,5,6,7};
    // vector<int>arr6(arr5);
    // print(arr6);

// -------------------------------------------------------------------

    // How to access first and last element in vector?
    // vector<char>words;
    // words.push_back('a');
    // words.push_back('b');
    // words.push_back('c');

    // cout<<"Front Element metod 1: "<<words[0]<<endl;      //Gives front element
    // cout<<"Front Element metod 2: "<<words.front()<<endl;       //Gives front element

    // cout<<"Last Element metod 1: "<<words[words.size()-1]<<endl;    //Gives last element
    // cout<<"Last Element metod 2: "<<words.back()<<endl;    //Gives last element



// -------------------------------------------------------------------

    // Another method for printing elements in vector:
    // vector<int>w;
    // w.push_back(1);
    // w.push_back(2);
    // w.push_back(3);
    // w.push_back(4);
    // w.push_back(5);
    // print2(w);


// -------------------------------------------------------------------


//    problem 1: Accept user data to push in vector.

    // vector<int>v;
    // int n;
    // cout<<"Enter the size of vector: ";
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     int data;
    //     cout<<"Enter the element "<<i<<": ";
    //     cin>>data;
    //     v.push_back(data);
    // }


    // // now, this was not possible in Array, but possible in vector.
    // for(int i=0; i<10;i++){
    //     v.push_back(80);
    // }

    // print(v);

    // // To clear the vector at once:
    // v.clear();

    // cout<<"Clearing entire vector now..."<<endl;

    // print(v);


}