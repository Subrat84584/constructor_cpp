#include<iostream>
using namespace std;
class Bank
{
	private:
		int pri,rate,year,si;
		public:
			Bank(int x,int y,int z)
			{
				pri=x;
				rate=y;
				year=z;
			}
			void read()
			{
				cout<<"princile ,rate and year"<<pri<<rate<<year;
			}
			void simple()
			{
				si=(pri*rate*year)/100;
			}
			void show()
			{
				cout<<"simple interest is:"<<si;
			}
};
int main()
{
	Bank b1(25,25,50);
	b1.read();
	b1.simple();
	b1.show();
	cout<<endl;
}
