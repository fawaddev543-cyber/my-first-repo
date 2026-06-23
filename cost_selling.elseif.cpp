#include<iostream>
using namespace std;
int main(){
	
	int cp;
	cout<<"enter costing price :";
	cin>>cp;
	
	int sp;
	
	cout<<"enter selling price :";
	cin>>sp;
	
	if(sp>cp){
	
	cout<<"profit :"<<sp-cp;
		
	}
	
	
	else if(cp>sp){
		
		cout<<"lose"<<cp-sp;
	}
	else
	cout<<"no profit no loss"<<endl;
	
}

