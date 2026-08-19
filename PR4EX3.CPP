#include<iostream.h>
#include<conio.h>
class Room
{
	int l,b,h,area,vol;
	public:
		void accept()
		{
			cout<<"enter lenght :"<<endl;
			cin>>l;
			cout<<"enter breadth :"<<endl;
			cin>>b;
			cout<<"enter height:"<<endl;
			cin>>h;
		}

		void display()
		{
			area = l*b;
			vol=l*b*h;
			cout<<"lenght is:"<<l<<endl;
			cout<<"breadth is :"<<b<<endl;
			cout<<"height is :"<<h<<endl;
			cout<<"area is :"<<l*b<<endl;
			cout<<"volume is :"<<l*b*h<<endl;
		}
};
void main()
{
	Room r;
	r.accept();
	cout<<"-----the output is -----"<<endl;
	r.display();
	getch();
	clrscr();
}
