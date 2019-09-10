#include<iostream>
#include<cmath>

using namespace std;

int find_divisible(int arr[], long long int temp, long long int no){
	int ret_val = 0;
	while(no > 0){
		if(temp % no == 0){
			if(arr[no] != 0){
				ret_val += 2 * arr[no]; 	
				break;
			}
			else{
				ret_val += 2;	
			}
		}
		no--;
	}
	return ret_val;
}

int main(int argc, char* argv[]){
	int *arr = new int[100000000]{0};
	arr[1] = 1;
	long long int i = 2;
	long long int previous_value = 1;
	int a;
	printf("Enter Value:\n");
	scanf("%d", &a);
	while(1){
		long long int temp = previous_value + i;
		long double sq_rt = sqrt(temp);
		long long int no;
		if((long long int)sq_rt == sq_rt){
			arr[temp] = 1;
			no = sq_rt - 1;
		}
		else{
			arr[temp] = 0;
			no = (long long int)sq_rt;
		}
		arr[temp] += find_divisible(arr, temp, no);
		if(arr[temp] >= a){
			cout << temp;
			break;
		}		
		printf("%llu %d\n", temp, arr[temp]);
		previous_value = temp;
		i++;
	}
}