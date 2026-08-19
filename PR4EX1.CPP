#include<iostream.h>
#include<conio.h>
class Student
{
	public:
	int i;
	int rollno;
	char name[20];
	void accept()
	{
		cout<<"enter rollno :"<<endl;
		cin>>rollno;
		cout<<"enter name :"<<endl;
		cin>>name[i];
	}
	void display()
	{
		cout<<"rollno :"<<rollno<<endl;
		cout<<"name :"<<name<<endl;
	}
};
void main()
{
	Student s;
	s.accept();
	s.display();
	getch();
	clrscr();
}

