//circular array
#include<iostream>
using namespace std;
int rear=0,front=0,n=100;
int a[100];
bool test=false;

void enqueue(int i)
{
	if ((rear==front)&&(test==true))
		cout << "Queue is full"<<endl;
	else
	{
		a[rear]=i;
		rear=(rear+1)%n;
		if(rear==front)		
			test=true;
	}
}

void dequeue()
{
	if ((rear==front)&&(test==false))
		cout <<"Queue is empty" <<endl;
	else
	{
		a[front]=0;
		front=(front+1)%n;
		if(front==rear)		
			test=false;
	}
}
int main()
{
	
	char c;
	int i,i1,m,p,p1,p2;
	cout << "輸入執行之總次數: " ;
	cin >> i;
	cout << endl;
	for(i1=0;i1<i;i1++)
	{
		cout << "請輸入指令: " ; 
		cin >> c ;
		cout << endl;
		if (c=='E')
			cin >> m;
		switch(c)
		{
			case 'E':
				enqueue(m);
				break;
			case 'D':
				dequeue();
				break;
			case 'P':
				if(rear>front)
				{
					for(p=front;p<rear;p++)
						cout << a[p] << " " ;
					cout << endl;
				}
				else
				{
					for(p1=front;p1<n;p1++)
						cout << a[p1] << " " ;
					for(p2=0;p2<rear;p2++)
						cout << a[p1] << " " ;
					cout << endl;
				}
				break;
			default:
				cout << "指令有問題" <<endl;
				cout << endl; 
		}
	}
	
	return 0;
	system("pause");	
}
