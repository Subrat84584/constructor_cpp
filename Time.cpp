#include<iostream>
using namespace std;
class Time
{
	private:
		int hr,min,sec;
		public:
			void setTime(int x,int y,int z)
			{
				hr=x;
				min=y;
				sec=z;
			}
			void showTime()
			{
				cout<<hr<<"hr "<<min<<"min "<<sec<<"sec";
				cout<<endl;
			}
			Time add(Time t)
			{
				Time temp;
				temp.hr=hr+t.hr;
				temp.min=min+t.min;
				temp.sec=sec+t.sec;
				return temp;
			}
};
int main()
{
	Time t1,t2,t3;
	t1.setTime(3,5,6);
	t2.setTime(6,5,3);
	t1.showTime();
	t2.showTime();
	t3=t1.add(t2);
	t3.showTime();
	cout<<endl;
}
