#include <iostream>
using namespace std;

int main() {
	int a=0,b=0,c=0;
cout<<"Enter the 3 angle of the triangle";
cin>>a>>b>>c;
if((a+b+c)==180)
cout<<"The triangle whose angles were entered is a valid triangle";
else
cout<<"The triangle whose angles were entered is not a valid triangle";
return 0;
}