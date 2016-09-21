#include <iostream>
#include <string>

using namespace std;

int sumar(int a,int b)
{
    return a+b;
}

void salute()
{
	string str="";
	cout<<"ingrese su nombre: "; cin>>str;
	cout<<endl<<"Hola: "<<str<<endl;
}
int main()
{
    cout<<"HELLO WORD!"<<endl;

    cout<<"nueva modificacion!!!"<<endl;
    cout<<sumar(5,7)<<endl;
    cout<<"HELLO WORD!"<<endl;
    cout<<"Si hacemos el parse"<<endl;
    cout<<"first modification in new-branch"<<endl;
    cout<<"hola :)"<<endl;
    cout<<"second modification in new-branch"<<endl;
    cout<<"generanando conflictos ^^" << endl;
    for(int i=0;i<10;i++)
    {
      cout<<"modificacion final"<<endl; 
    }
    salute();	
    return 0;
}

