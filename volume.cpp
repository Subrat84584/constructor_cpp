#include<iostream>
using namespace std;
class Box
{
	private:
		int len,bre,hei,vol;
		public:
			Box(int x,int y,int z)
			{
				len=x;
				bre=y;
				hei=z;
			}
			void volume()
			{
				vol=len*bre*hei;
			}
			void show()
			{
				cout<<"volume of the box"<<vol;
			}
};
int main()
{
	Box b1(3,4,5);
	b1.volume();
	b1.show();
	cout<<endl;
	
}
