#include<iostream>
using namespace std;
class Cube
{
	private:
		int v,a;
		public:
			Cube(int x)  //Constructor
			{
				a=x;
				v=a*a*a;
			}
			void show()
			{
				cout<<"Volume of cube:"<<v;
			}
};
int main()
{
	Cube c(3);
	c.show();
	cout<<endl;
}
