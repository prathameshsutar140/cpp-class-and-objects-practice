#include<iostream.h>
#include<conio.h>
class Mean
{
	int num1,num2;
	public:
	void asign(int a,int b)
	{
		num1=a;
		num2=b;
	}
	void display()
	{
		int m =(num1+num2)/2;
		cout<<"first number is :"<<num1<<endl;
		cout<<"second number is :"<<num2<<endl;
		cout<<"the mean is :"<<m<<endl;
	}
};
void main()
{
	Mean m1;
	m1.asign(4,8);
	m1.display();
	getch();
	clrscr();
}