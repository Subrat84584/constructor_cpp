#include<iostream>
using namespace std;
class Bill
{
	private:
		int unit;
		public:
			void get(int x)
			{
				unit=x;
			}
			void calculate()
			{
				if(unit<=100)
				{
					cout<<unit*1.20;
				}
				else if(unit<=200)
				{
					cout<<(100*1.2)+(unit-100)*2;
				}
				else if(unit>200)
				{
					cout<<(100*1.2)+(100*2)+(unit-200)*3;
				}
			}
};
int main()
{
	Bill b1;
	b1.get(90);
	b1.calculate();
}
