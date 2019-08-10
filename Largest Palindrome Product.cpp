// A palindromic number reads the same both ways. 
// The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

#include<iostream>

using namespace std;

int reverse(int no){
	int temp = 0;
	while(no != 0){
		int digit = no % 10;
		temp = temp * 10 + digit;
		no /= 10;
	}
	return temp;
}

int isPalindrome(int no){
	if(reverse(no) == no){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int largestPalindrome = 0;
	int a = 999;
	while(a >= 100){
		int b, db;
		if(!(a % 11)){
			b = 999;
			db = 1;
		}
		else{
			b = 990;
			db = 11;
		}
		while(b >= a){
			if(a*b <= largestPalindrome)
				break;
			if(isPalindrome(a*b))
				largestPalindrome = a*b;
			b -= db;
		}
		a--;
	}
	cout << "Largest 3 digit Palindrome is: " << largestPalindrome;
}