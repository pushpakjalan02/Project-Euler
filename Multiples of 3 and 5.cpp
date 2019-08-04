#include<iostream>

using namespace std;

/*
int main(){
	int sum = 0;
	for(int i = 1; i < 1000; i++)
	{
		if(( i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	cout << "Sum is: " << sum;
}
*/

int SumDivisibleBy(int n, int below){
	int p = (below - 1) / n;
	return n * p * (p + 1) / 2;
}

int main(){
	cout << "Sum is: " << SumDivisibleBy(3, 1000) + SumDivisibleBy(5, 1000) - SumDivisibleBy(15, 1000);
}