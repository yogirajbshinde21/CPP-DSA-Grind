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

int main(){

//    problem 1: Accept user data to push in vector.

    vector<int>v;
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int data;
        cout<<"Enter the element "<<i<<": ";
        cin>>data;
        v.push_back(data);
    }


    // now, this was not possible in Array, but possible in vector.
    for(int i=0; i<10;i++){
        v.push_back(80);
    }

    print(v);

    // To clear the vector at once:
    v.clear();

    cout<<"Clearing entire vector now..."<<endl;

    print(v);


}