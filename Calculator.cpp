#include <iostream>
using namespace std;
class Operation
{
	public:
		void add(float a,float b)
		{
			cout<<a <<" + "<<b<<" = "<<a+b<<endl;
		}
		void sub(float a,float b)
		{
			cout<<a <<" - "<<b<<" = "<<a-b<<endl;
		}
		void multi(float a,float b)
		{
			cout<<a <<" * "<<b<<" = "<<a*b<<endl;
		}
		void div(float a,float b)
		{
			if(b!=0)
				cout<<a <<" / "<<b<<" = "<<a/b<<endl;
			else
				cout<<"Number can't be divide by zero";
		}
};
int main()
{
	int num;
	float a,b;
	Operation opperate;
	while(num != 5)
	{
	cout<<"Select operation to be performed..."<<endl;
	cout<<"1. Add Numbers"<<endl;
	cout<<"2. Subtract Numbers"<<endl;
	cout<<"3. Multiply Numbers"<<endl;
	cout<<"4. Divide Numbers"<<endl;
	cout<<"5. Exit"<<endl;
	cin>>num;
	if(num == 5)
		break;
	cout<<"Enter Number a = ";
	cin>>a;
	cout<<"Enter Number b = ";
	cin>>b;
	switch(num)
	{
		case 1:
			opperate.add(a,b);
			break;
		case 2:
			opperate.sub(a,b);
			break;
		case 3:
			opperate.multi(a,b);
			break;
		case 4:
			opperate.div(a,b);
			break;
		default:
			num = 5 ;
			break;
	}
	}       	
	return 0;
}