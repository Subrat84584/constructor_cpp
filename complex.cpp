#include<iostream>
using namespace std;
class complex
{ 
     private:
        int real,img;
	public:
		void setData(int r,int i)
		{
			real=r;
			img=i;
			
		}
		void display()
		{
			cout<<real<<" + "<<img<<" i "<<endl;
		}
		void add(complex c)
		{
			cout<<real + c.real<<"+"<<img+c.img<<"i";
		}
};
int main()
{
	complex c1,c2;
	c1.setData(2,4);
	c2.setData(3,5);
	c1.display();
	c2.display();
	c1.add(c2);
	cout<<endl;
	return 0;
}
