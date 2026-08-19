#include<conio.h>
#include<iostream.h>
class Room
{	private:

	float lenght;
	float breadth;
	float height;
	public:
	void getdata()
	{
	cout<<"enter the lenght of room:  "<<endl;
	cin>>lenght;
	cout<<"enter a breadth of room: "<<endl;
	cin>>breadth;
	cout<<"enter a height of room :"<<endl;
	cin>>height;
	}
	void cal_area()
	{
		float area = lenght * breadth;
		cout <<"the Area of room is :"<<area<<endl;
	}
	void cal_vol()
	{
		float volume = lenght * breadth * height;
		cout<<"the volume of the room is :"<<volume<<endl;
	}
};
void main()
{
	Room r1;
	r1.getdata();
	cout<<"----- Room Detail's -----"<<endl;
	r1.cal_area();
	r1.cal_vol();
	getch();
	clrscr();
}