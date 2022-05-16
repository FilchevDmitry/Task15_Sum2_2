#include <iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a = { 2,7,11,15 };
	int n = 9;
	int one = 0, two = 0;
	for (int i = 0; i < a.size(); i++ )
	{
		for (int j = 1; j < a.size(); j++)
		{
			if (a[i] + a[j] == n)
			{
				one = a[i];
				two =a[j];
			}
		}
	}
	cout << one << " " << two << endl;
}