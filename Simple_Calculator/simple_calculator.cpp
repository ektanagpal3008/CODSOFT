#include<iostream>
using namespace std;
int main()
{
	char op;
	float a,b;
	cout<<"enter the operation to be performed "<<endl;
	cin>>op;
	cout<<"enter the numbers a and b "<<endl;
	cin>>a>>b;
	switch(op){
		case'+':
			cout<<a+b;
			break;
			case'-':
				cout<<a-b;
				break;
				case'*':
					cout<<a*b;
					break;
					case'/':
						cout<<a/b;
						break;
						default:
							cout<<"error! operation is not correct";
	}
	return 0;
}
