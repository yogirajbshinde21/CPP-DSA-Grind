#include <iostream>
#include <vector>

using namespace std;



void print(vector<int>v){
    int size = v.size();  //gives the size of vector.\

    cout<<"Printing vector: "<<endl;
    for(int i=0; i<size;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
}

int main(){

    // Programmers on inventing Vector in STL: 
        // vector is a data structure.
        // In vector, don't tell the size of vector.
        // Just keep inserting, and I will manage the allocation.


    vector<int> v;  //this is how we define vectors, here don't need to specify the size.
    // It's same like array.


    // insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);



    // Pop -> Delete -> END se pop hota hai.
    // 1 -> 2 -> 3
    v.pop_back();
    print(v);

    v.pop_back();
    print(v);

    v.pop_back();
    print(v);

    // v.pop_back();
    print(v);
    // Error : std::bad_array_new_length means "length of array is finished."


}