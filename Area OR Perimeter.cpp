#include <iostream>
using namespace std;

int main() {
	int l,b;
	cin>>l>>b;
	int area=l*b,peri=2*(l+b);
	if(area>peri){
	    cout<<"Area"<<endl<<area<<endl;
	}else if(area<peri){
	    cout<<"Peri"<<endl<<peri<<endl;
	}else{
	    cout<<"Eq"<<endl<<area<<endl;
	}
	return 0;
}

