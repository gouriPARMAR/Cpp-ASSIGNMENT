//	Write a C++ program to calculate the sum of digits of a given number using a while loop.
#include<iostream>

using namespace std;

int main(){
	 int n , sum = 0  ;
    cout<<"Enter the numbbr n :- ";
    cin>>n;
    while(n >0){
        int rem = n%10;
        sum += rem;
        n /= 10;
    }
    cout<<sum;
	return 0;
}