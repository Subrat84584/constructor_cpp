#include<iostream>
using namespace std;
class Counter
{
	private:
		int count;
		public:
			Counter()  //constructor
			{
				count=0;
			}
			void set_count()
			{
				count++;
			}
			int get_count()
			{
				return count;
			}
};
int main()
{
	Counter c1;
	cout<<"before calling counter function,count=";
	cout<<c1.get_count();
	c1.set_count();
	cout<<"\n\n after calling the counter function,count=";
	cout<<c1.get_count();
	return 0;
}
