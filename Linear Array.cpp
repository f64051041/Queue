//linear array
#include<iostream>
using namespace std;
int rear=0,front=0,n=100;
int a[100];
 
int full()
{
	if ((rear==n)&&(front==0))
		return 1;
	else
		return 0;	
}

int empty()
{
	if(rear==front)
		return 1;
	else
		return 0;
}

void enqueue(int i)
{
	if(full()== 1)
		cout << "Queue is full!" << endl;
	else
	{
		a[rear]=i;
		rear++;
	}
}
void dequeue()
{
	if(empty()==1)
		cout << "Queue is empty!"<<endl;
	else
	{
		a[front]=0;
		front++;
	}
}
int main()
{
	
	char c;
	int i1,i,m,p,c1,c2;
	cout << "輸入執行之總次數: " ;
	cin >> i;
	cout << endl;
	for(i1=0;i1<i;i1++)
	{
		if((rear==n)&&(full()==0))
		{
			c1=0;
			for(c2=front;c2<rear;c2++)
			{
				a[c1]=a[c2];
				c1++;	
			}
			rear=rear-front;
			front=0;
	 	}
		
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
				for(p=front;p<rear;p++)
					cout << a[p] << " " ;
				cout << endl; 
				break;
			default:
				cout << "指令有問題" <<endl;
				cout << endl; 
		}
	}
	
	return 0;
	system("pause");	
}







