#include <iostream>
#include <string>
using namespace std;

// int Base_b_expansion(int number, int base); //base > 1	|	number & base are positve(+)	|	done individually

//function for Binary Addition	|	tested
int binAddition(int a,int b) 
{
      int c; //carry
      while (b != 0) {
              //find carry and shift it left
              c = (a & b) << 1;
              //find the sum
              a=a^b;
              b=c;
      }
      return a; 
}


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
		  
	return x;
}

//not tested
int multiply(int a, int b){
    int n =10, c=0, p=0;;
    for (int j = 0; j < n; j++){
        if (b = 1)
            c=a;
            
        
        else
            c =0;
        
        for (int i = 0; i < n; i++){
            p= p+c;
        }

    }
    return p;
}

//surely work
int gcd(int a, int b)
{
	int x = a;
	int y = b;
	while (y != 0)
	{
		int r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int main() 
{
	//binAddition test 
	{
	int number1,number2, binAdd;
 
	    printf("Input first integer value: ");
	    scanf("%d",&number1);

	    printf("Input second integer value: ");
	    scanf("%d",&number2);

	    binAdd=binAddition(number1,number2);

	    printf("Binary Addition: %d\n",binAdd);
	}
	return 0;
}	 
