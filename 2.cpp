#include<iostream>
using namespace std;
class icecream
{
	public:
		string datamember;
		void disply()
		{
			int x=150,y=100;
			cout<<"vanila:"<<y<<endl;
			cout<<"chocolate :"<<y<<endl;
			cout<<"mango:"<<y<<endl;
			cout<<"almond:"<<x<<endl;
			cout<<"trutifruti"<<endl;
			cout<<"cruch:"<<y<<endl;
			}
			void wafercream()
			{
				int x,c=100,pay=10;
				cout<<"enter you choice "<<endl;
				cin>>x;
				if(x==100)
				{
					x=c+pay;
					cout<<"pay by customer"<<x<<endl;	
				}
			}
			void cholate()
			{
			
			int x,c=100,pay=100;
			cout<<"enter you choice"<<endl;
			cin>>x;
			if(x==100)
			{
				x=c+pay;
				cout<<"pay by customer"<<x<<endl;
				
			}
		
		}
			~icecream()	
			{
				cout<<"thank you"<<endl;
			}
};
int main()
{
icecream cream;
	             cream.wafercream();
	             cream.disply();
	             cream.cholate();
}

