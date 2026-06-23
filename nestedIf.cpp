#include<iostream>
using namespace std;
int main(){
/*	
	int marks;
	cout<<"enter totle marks out of  (500):";
	cin>>marks;
	int percentage= marks*100/500;
	cout<<"percentage is "<<percentage<<endl;
	
	if(percentage>=50){
		
		
		cout<<"result=pass"<<endl;
		
		
		
		
		if(percentage>=80){
			
			cout<<"grade = A";
		}
		else if(percentage>=70){
			
			cout<<"grade=B";
		}
		else if(percentage>=60){
			cout<<"grade=C";
			
		}
		else
		{
			cout<<"grade= D";
		}
	}
	else
	{
		cout<<"result= fail"<<endl;
		cout<<"grade= F"<<endl;
	}
*/

int marks ;

cout<<"enter totle marks out of (600) :";
cin>>marks;
int percentage= marks*100/600;
cout<<"percentage is :"<<percentage<<endl;

if(percentage>=50){
	
cout<<"result= pass"<<endl;


if(percentage>=80){
	
	cout<<"grade A"<<endl;
}
else if(percentage>=70){
	cout<<"grade B ";
}
else if(percentage>=60){
	cout<<"Grade C";
}
	
}
else 
cout<<"result= fail ";

}
