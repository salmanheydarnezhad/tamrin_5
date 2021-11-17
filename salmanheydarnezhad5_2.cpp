
#include<iostream>
using namespace std;
int main()
{
	int m, n;
	cout << "Enter number : ";
	cin >> n;
	cout << "Enter number : ";
	cin >> m;
	cout << endl;
	for (int j = 1; j <= n; j++)
	{
		for (int i = 1; i <= m; i++)
		{
			cout << j*i << "\t";
		}
		cout << endl << endl << endl;
	}
	system("pause");
    return 0;
}

