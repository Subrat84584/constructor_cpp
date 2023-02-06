#include<iostream>
using namespace std;
class StaticCount
{
	public:
		static int a;
			void incre()
			{
				a++;
			}
			void show()
			{
				cout<<endl<<a;
			}
};
int StaticCount::a=0;
int main()
{
	StaticCount s1,s2,s3;
	s1.incre();
	s2.incre();
	s3.incre();
	s3.show();
	cout<<endl;
}
