#include<iostream>
#include<cmath>

using namespace std;

int main(){
	long long int value = 600851475143;	
	int max_prime_val = 2;
	int i = 3;
	while(value % 2 == 0)
	{
		value /= 2;
	}
	while(value != 1){
		if(value % i == 0)
		{
			value /= i;
			max_prime_val = i;
			continue;
		}
		i += 2;
		if(i > sqrt(value)){
			i = value;
		}
	}
	cout << "Largest Prime Value for " << value << " is " << max_prime_val;
}