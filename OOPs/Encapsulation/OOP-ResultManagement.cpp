#include <iostream>
using namespace std;
class result{
	private:
		int rollno;
		char name[50];
		int marks[3];
		public:
			void input(){
				cout<<"enter name:";
				cin>>name;
				cout<<"enter your roll number:";
				cin>>rollno;
				for(int i=0;i<3;i++){
					cout<<"enter marks["<<i<<"] are: ";
					cin>>marks[i];
				}
			}
			void show(){
				cout<<"\nyour name is: "<<name<<endl;
				cout<<"your roll number is: "<<rollno<<endl;
				for(int i=0;i<3;i++){
					cout<<"your marks["<<i<<"] is: "<<marks[i]<<endl;
				}
			}
			int total(){
				int t=0;
				for(int i=0;i<3;i++)
					t +=marks[i];
					return t;
				
			}
			
			double avg(){
				int t=0;
				for(int i=0;i<3;i++)
					t +=marks[i];
					return t/3.0;
				
			}
};

int main()
{
	result r;
	r.input();
	r.show();
	
	cout<<"\nthe total marks are: "<<r.total()<<endl;
	cout<<"the average are: "<<r.avg()<<endl;
	
	return 0;
}