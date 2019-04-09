#include <iostream>
#include <string>
using namespace std;

// int Base_b_expansion(int number, int base); //base > 1	|	number & base are positve(+)	|	done individually

int Add(int a, int b);	//a & b are positve(+)

int Modular_exponentiation(int b, /*n = (ak-1ak-2...a1a0)2,*/ int m/*positive(+)*/)
{
	int b, m,i,power,k,a;
	int x = 1 ;

	power = b % m ;

	for (i=0;i<=k;i++){
	  if (a = 1) {
	     x= x*power;
	     x = x % m;
	     power= (power*power)% m ;
		  
	return power;
}


int Multiply(int a, int b);	//a & b are positive(+)

//int function();

int main() 
{
	//test here
	return 0;
}	 
