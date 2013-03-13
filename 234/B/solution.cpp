#include <iostream>
#include <cstdio>
using namespace std;

struct Node
{
	int id;
	Node *next;
}*head;

void insert(int n)
{
	Node *p = new Node;
	p->id = n;
	p->next = NULL;
	if(!head)
		head = p;
	else {
		Node *cur;
		for(cur=head; cur->next && cur->next->id<n;cur=cur->next);
		if(cur==head&& head->id > n)
		{
			p->next = head;
			head = p;
		}
		else
		{
			p->next = cur->next;
			cur->next = p;
		}
	}
}

void print()
{
	Node *cur;
	for(cur=head; cur; cur=cur->next)
	{
		cout << cur->id << " ";
	}
	cout << endl;
}

int findMax(int ar[], int size, int& max)
{
	int index;
	max=0;
	for(int i=0; i<size; i++)
	{
		if(max<=ar[i])
		{
			max = ar[i];
			index = i;
		}
	}
	return index;
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int timeonTrain, timeForReading;
	int index,max;
	
	cin >> timeonTrain;
	cin >> timeForReading;
	
	int ar[timeonTrain];
	
	for(int i=0; i<timeonTrain; i++)
	{
		cin >> ar[i];
	}
	
	for(int i=0; i<timeForReading; i++)
	{
		index = findMax(ar,timeonTrain,max);
		insert(index+1);
		ar[index]=-1;
	}
	
	cout << max << endl;
	print();
}
