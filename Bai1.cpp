#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap so nguyen bat ky : ";
	cin>>n;
	if(n>100){
		cout<<"So nay lon hon 100";
	}else if(n == 100){
		cout<<"So nay bang 100";
	}else{
		cout<<"So nay nho hon 100";
	}
	return 0;
}
