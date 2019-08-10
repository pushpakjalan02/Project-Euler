// The sum of the squares of the first ten natural numbers is,

// 12 + 22 + ... + 102 = 385

// The square of the sum of the first ten natural numbers is,

// (1 + 2 + ... + 10)2 = 552 = 3025

//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int no = 100;
	int sq_of_sum = (no * (no + 1))/ 2;
	sq_of_sum = round(pow(sq_of_sum , 2));
	int sum_of_sq = (no * (no + 1) * (2 * no + 1))/ 6;
	int difference =  sq_of_sum - sum_of_sq;
	cout << "Answer is: " << difference;
}