// Reference Variable: Call by Value & Call By Reference

#include <iostream>

using namespace std;


// Call By Value example:
// int callByValue(int new){  //Call By Value means only the value is passed while calling the function and not the actual parameter.
//     new+=1;
//     return new;
// }



// Call by Reference example:
void callByReference(int &a){       // 'a' is a reference variable refering to actual variable 'ant'. Variable 'a' doesn't have its own memory as it is referencing to another variable.
    a+=1;   //This will make change in actual variable, because 'a' is reference variable refering to the original variable 'ant'.
}


int main(){


    // int n;
    // cin>>n;
    // n = callByValue(n);
    // cout<<"n: "<<n<<endl;


    // int ant;
    // cin>>ant;
    // callByReference(ant);
    // cout<<"a: "<<ant<<endl;




 
    // int n = 5;    //original variable
    // int &k = n;   //k is reference variable because it is refering to variable n (i.e. a nickname given to variable n)
    // int &c = n;   //c is reference variable
    // int &d = c;   //d is reference variable
    // cout<<"n: "<<n<<endl;
    // cout<<"k: "<<k<<endl;
    // cout<<"c: "<<c<<endl;
    // cout<<"d: "<<d<<endl;


    // cout<<"now doing k++"<<endl;

    // k++;   //this change will apply to all variables (including original variable)

    // cout<<"n: "<<n<<endl;
    // cout<<"k: "<<k<<endl;
    // cout<<"c: "<<c<<endl;
    // cout<<"d: "<<d<<endl;

    // int &t = 6;    //error because reference variable can't make alias of constant.

    return 0;
}