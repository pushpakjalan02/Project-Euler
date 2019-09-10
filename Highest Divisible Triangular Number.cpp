#include<iostream>
#include<cmath>

using namespace std;

int find_divisible(int* arr[2], long long int next, long long int temp, long long int no){
	int ret_val = 0;
	while(no > 0){
		int i = 0;
		if(temp % no == 0){
			while(i < next){
				if(arr[i][0] == no){
					break;
				}
				i++;
			}
			if(i != next){
				ret_val += 2 * arr[i][1]; 	
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
	int **arr = new int*[10000000];
	for(int i = 0; i < 10000000; ++i) {
	    arr[i] = new int[2];
	}
	long long int next = 1;
	arr[0][0] = 1;
	arr[0][1] = 1;
	long long int i = 2;
	long long int previous_value = 1;
	int a;
	printf("Enter Value:\n");
	scanf("%d", &a);
	while(1){
		long long int temp = previous_value + i;
		long double sq_rt = sqrt(temp);
		long long int no;
		arr[next][0] = temp;
		if((long long int)sq_rt == sq_rt){
			arr[next][1] = 1;
			no = sq_rt - 1;
		}
		else{
			arr[next][1] = 0;
			no = (long long int)sq_rt;
		}
		arr[next][1] += find_divisible(arr, next, temp, no);
		if(arr[next][1] >= a){
			cout << temp;
			break;
		}		
		printf("%d %d\n", arr[next][0], arr[next][1]);
		previous_value = temp;
		i++;
		next++;
	}
}