#include<conio.h>
#include<iostream.h>
class Area
{
	int l,b,area;
	public:
	void accept()
	{
		cout<<"enter lenght :"<<endl;
		cin>>l;
		cout<<"enter breadth:"<<endl;
		cin>>b;
	}
	void calarea()
	{
		area = l * b;
	}
	void display()
	{
		cout<<"lenght is : "<<l<<endl;
		cout<<"breadth is :"<<b<<endl;
		cout<<"the area is :"<<l*b<<endl;
	}
};
void main()
{
	Area a;
	a.accept();
	a.display();
	getch();
	clrscr();
}
