#include<iostream>
using namespace std;
class date
{
	private:
		int Date,month,year;
		public:
			date(int x,int y,int z)
			{
				Date=x;
				month=y;
				year=z;
			}
			void show()
			{
				cout<<Date<<"/0"<<month<<"/"<<year;
			}
		
};
int main()
{
	date d1(5,2,2023);
	d1.show();
	cout<<endl;
	
}
