#include <iostream>
#include <string>


using namespace std;

//first modification in new-branch
void salute();
int main()
{
    cout<<"HELLO WORD!"<<endl;
    /*translating*/
    cout<<"Yes, we do the parse"<<endl;/**/
    cout<<"first modification in new-branch"<<endl;


    salute();	
    return 0;
}

void salute()
{
	string str="";
	cout<<"enter your name: ";
	cin>>str;
	std::cout<<"\nHola: "<<str<<std::endl;
}