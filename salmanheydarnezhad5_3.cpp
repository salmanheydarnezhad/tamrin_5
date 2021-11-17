
#include<iostream>
using namespace std;
int main()
{
	char s[100];
	cout << "jomle khode ra vared konid : ";
	gets_s(s);
	int j = 1;
	for (int i = 0; s[i]!=NULL; i++)
		if (s[i] == ' ')
			j++;
	cout << "tedad jomle ha : " << j << endl;
	system("pause");
    return 0;
}

