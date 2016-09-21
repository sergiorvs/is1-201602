#include <iostream>
#include <string>

using namespace std;

int add(int a,int b)
{
    return a+b;
}

void salute()
{
	string str="";
	cout<<"enter your name: "; cin>>str;
	cout<<endl<<"Hello: "<<str<<endl;
}
int main()
{
    cout<<"HELLO WORD!"<<endl;
    cout<<"new modificando!!!"<<endl;
    cout<<add(5,7)<<endl;
    cout<<"HELLO WORD!"<<endl;
    cout<<"yes we do the parse"<<endl;
    cout<<"first modification in new-branch"<<endl;
    cout<<"hola :)"<<endl;
    cout<<"second modification in new-branch"<<endl;
    cout<<"generating conflicts ^^" << endl;
    cout<<"third modification in xime-branch"<<endl;
    for(int i=0;i<10;i++)
         cout<<"modification end"<<endl; 
    salute();	
    return 0;
}

