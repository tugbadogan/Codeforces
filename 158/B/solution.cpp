#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int count=0;
	int temp,tmp2=0;
	vector<int>big;
	vector<int>small;
	int number,n;
	cin >> number;
	
	for(int i=0; i<number; i++)
	{
		cin >> n;
		if(n>=2)
			big.push_back(n);
		else
			small.push_back(n);
	}
	sort(big.begin(), big.end());
	while(!big.empty())
	{
		if(big.back()==4)
		{
			big.pop_back();
			count++;
		}
		else if(big.back()==3)
		{
			big.pop_back();
			if(!small.empty())
			{
				small.pop_back();
			}
			count++;
		}
		else
		{
			big.pop_back();
			temp=2;
			if(!small.empty())
			{
				while(temp<4 && !small.empty())
				{
					small.pop_back();
					temp++;
				}
			}
			else if(!big.empty())
			{
				big.pop_back();
			}
			count++;
		}
	}
	while(!small.empty())
	{
		tmp2++;
		small.pop_back();
	}
	if(tmp2%4!=0)
	{
		tmp2 = (tmp2/4)+1;
	}
	else
		tmp2 /= 4;
	count += tmp2;
	cout << count << endl;
}
