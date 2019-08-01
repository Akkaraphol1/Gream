#include<iostream>
#include<string>
using namespace std;
int main(){
	string name,fx;
    int manu,art;
	char BM,Q;
	cout << "////////Menu///////"<< endl;
	cout << "1. Register "<<endl;
	cout << "2. Login "<<endl;
	cout << "Q. Exit Program "<< endl;
	cout <<"__________________"<< endl;
	do{
	cout << "Enter Menu : ";
	cin >> BM;
	cout <<"*******Register*******"<<endl;
	cout<<"input username : ";
	cin>> name;
	cout <<"input password : ";
	cin >> manu;
	cout << "////////Menu///////"<< endl;
	cout << "1. Register "<<endl;
	cout << "2. Login"<<endl;
	cout << "Q. Exit Program "<< endl;
	cout <<"__________________"<< endl;
	
	if(BM =='1')
	{
	cout << "Enter Menu : ";
	cin >> BM;
	cout << "******Login********"<<endl;
	cout<<"input username : ";
	cin>> fx;
	cout <<"input password : ";
	cin >> art;
	}
	if(art != manu)cout<<"!!!Username or Password is incorrect Please try again!!!";
	{
	cout<<"\ninput username : ";
	cin>> fx;
	cout <<"input password : ";
	cin >> art;
	}
	if(art == manu) cout<<"Username or Password is correct ^_^ ";
	{
	cout << "////////Menu///////"<< endl;
	cout << "1. Register "<<endl;
	cout << "2. Login"<<endl;
	cout << "Q. Exit Program "<< endl;
	cout <<"__________________"<< endl;
	cout<<"Exit Program"<<endl;
	}
	}
	while (BM != 'Q');
	return(0);
}

	
