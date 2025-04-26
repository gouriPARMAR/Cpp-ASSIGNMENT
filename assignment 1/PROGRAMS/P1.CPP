//	Write a C++ program to demonstrate the use of static_cast by converting an int to a double and vice versa.
#include<iostream>
using namespace std;
int main(){
	int interger = 20;
    double doubleNumber = 20.13;

    double conInteger = static_cast<double>(interger);

    int conDouble = static_cast<int>(doubleNumber);

    cout<<interger<<" is converted to  "<<conInteger<<endl;

    cout<<doubleNumber<<" is converted to "<<conDouble<<endl;
	return 0;
}