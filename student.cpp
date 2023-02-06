//6.student details
#include<iostream>
using namespace std;
class Student
{
	private:
		int roll_no;
		public:
			Student(int x)
			{
				roll_no=x;
				cout<<"Student name:subrat"<<" "<<"roll_no"<<roll_no;
				
			}
};
int main()
{
	Student s1(12);
}
