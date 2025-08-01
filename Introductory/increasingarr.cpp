#include <bits/stdc++.h>
 
using namespace std;
 
const int maxn = 2e5;
int arr[maxn]{};
 
int main(void)
{
	int len; cin >> len;
	uint64_t xo = 0;
 
	for(int p = 0; p < len; p++)
		cin >> arr[p];
 
	for(int p = 0; p < len - 1; p++) {
		if(arr[p] > arr[p + 1]) {
			xo += arr[p] - arr[p + 1];
			arr[p + 1] = arr[p];
		}
	}
 
	cout << xo;
 
	return 0;
}
