#include<iostream>
using namespace std;
int main(){
	
/*	
	int student;
	int marks;
	float avg;
	int totle;
	float s;
	cout<<"enter no of students:";
	cin>>student;
	

	
	for(int i=1;i<=student;i++){
		
		
		cout<<"enter marks for student"<<i<<endl;
		
		for(int j=1;j<=student;j++){
			
			totle=0;
		
			
			cout<<"enter marks of subject"<<" :";
			cin>>marks;
			
			totle=totle+marks;
			
		}
		
		avg=totle/5.9;
		
		cout<<"totle marks ="<<totle<<endl;
		cout<<"average of tottle marks ="<<avg<<endl;
	}
	
	*/
	int percentage;
	int marks;
	int student;
	float avg;
	int totle;
	cout<<"enter numbr of students :";
	cin>>student;
	
	
	for(int i=1;i<=student;i++){
		
		cout<<" enter marks for students :"<<i<<endl;
		
		for(int j=1;j<=student;j++){
			
			cout<<"marks of subjects :"<<j<<" ";
			cin>>marks;
			totle=marks+totle;
		}
		
		avg=totle/5.0;
		cout<<"totle marks is "<<totle<<endl;
		cout<<"average of totle mars is "<<avg<<endl;
		percentage=marks*100/totle;
		cout<<"percentage of each student :"<<percentage<<endl;
		
	}
	
	
	}
