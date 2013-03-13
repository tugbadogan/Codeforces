#include <iostream>
#include <string>
using namespace std;

string workout(int *ar, int size)
{
	int chest=0,biceps=0,back=0,max;
	string a = "chest";
	string b="biceps";
	string c="back";
	if(size==1)
	{
		chest = ar[0];
	}
	else if(size==2)
	{
		chest = ar[0];
		biceps = ar[1];
	}
	else if(size== 3)
	{
		chest = ar[0];
		biceps = ar[1];
		back = ar[2];
	}
	else
	{
		for(int i=0; i<size; i+=3)
		{
			chest += ar[i];
		}
		for(int i=1; i<size; i+=3)
		{
			biceps += ar[i];
		}
		for(int i=2; i<size; i+=3)
		{
			back += ar[i];
		}
	}
	
	max = chest;
	if(biceps>max)
		max = biceps;
	if(back>max)
		max = back;
	if(max == chest)
		return a;
	if(max == biceps)
		return b;
	if(max == back)
		return c;
}

int main()
{
	int number,n;
	cin>> number;
	int *ar = new int[number];
	for(int i=0; i<number; i++)
	{
		cin>> n;
		ar[i] = n;
	}
	cout << workout(ar,number);
	return 0;
}
