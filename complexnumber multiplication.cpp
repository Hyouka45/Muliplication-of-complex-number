#include<iostream>
using namespace std;
class complex_number{
	int x,y;
	public:
		void datain(){
			cout<<"Enter the complex number:"<<endl;
			cin>>x>>y;
		}
		complex_number multiplication(complex_number &c){
			complex_number c4;
			c4.x=(x*c.x)-(y*c.y);
			c4.y=(x*c.y)+(y*c.x);
			return c4;
		}
		void showdata(){
			if(y<0){
				cout<<"=>"<<x<<y<<"i"<<endl;
			}
			else{
			cout<<x<<"+"<<y<<"i"<<endl;	
			}
		}
};
int main(){
	int a,b;
	complex_number c1,c2,c3;
	c1.datain();
	c2.datain();
	cout<<"Entered data";
	c1.showdata();
	cout<<"after multiplication:";
	c3=c1.multiplication(c2);
	cout<<"=>";c3.showdata();
	
	return 0;
}
