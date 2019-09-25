#include<iostream>
#include<iomanip>
using namespace std;
void display(int num[5][6]);
void graph(int num[5][6]);
int main()
{
	int num[5][6];
	srand(time(NULL));
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=5;j++)
		{
		num[i][j]=rand() % 9;
		}
	}
	display(num);
	graph(num);
	return 0;
}
void display(int num[5][6])
{
	
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=5;j++)
		{
		cout<<"";
		num[i][j]=rand() % 9;
		cout << setw(5) << setfill(' ') <<num[i][j];
		}
		cout<<endl;
	}
	cout<<"----------------display---------------\n";
	cout<<"     0    1    2    3    4    5\n";
	cout<<"--------------------------------------\n";
}
void graph(int num[5][6])
{

	for(int i=0;i<=4;i++)
		{
			cout<<i+1;
			for(int j=0;j<=5;j++)
			{
				
				if(num[i][j]!=0)
				{
					cout<<setw(5)<<"*";
				}
				else if(num[i][j]==0){
					cout<<setw(5)<<" ";
				}
			}
	cout<<endl;
	}	
}