#include<iostream>
using namespace std;
int main(){
	int *m=new int(20);
	cout<<*m<<endl;
	
	cout<<m<<endl;
	delete m;
	cout<<m<<endl;
	return 0;
}
