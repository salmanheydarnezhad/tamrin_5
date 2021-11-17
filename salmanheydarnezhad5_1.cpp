
#include<iostream>
using namespace std;
int main()
{
	int temp, n, s;
	cout << "tedad satr ha ra vared konid : ";
	cin >> n;
	int nums[50] = { 0 };
	s = n - 1;
	nums[s] = 1;
	for (int i = 0; i<n; i++) {
		cout << endl;
		for (int j = 0; j <= i; j++) {
			temp = nums[s + j] + nums[s + j + 1];
			cout << temp <<"\t";
			nums[s + j] = temp;
		}
		s--;
	}
	cout << endl;
	system("pause");
    return 0;
}

