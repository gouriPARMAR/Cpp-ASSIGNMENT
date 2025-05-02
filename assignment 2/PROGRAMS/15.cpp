//. Implement a macro to find the maximum of two numbers and compare it with an inline function.
#include<iostream>
#define MAX(a ,b) ((a) > (b) ? (a) : (b))

inline int maxOfTwo(int a , int b){
	return((a > b) ? a : b);
}

int main(){
	int num1 , num2;
	std::cin>>num1>>num2;
	std::cout<<"Max of two numbers using Macro : "<<MAX(num1 , num2)<<std::endl;
	std::cout<<"Max of two numbers using inline function : "<<maxOfTwo(num1 , num2)<<std::endl;
	return 0;
}