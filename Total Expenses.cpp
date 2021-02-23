#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
		double quan,price;
		cin>>quan>>price;
		
		std::cout << std::setprecision(6) <<std::fixed;
		
		if(quan>=1000){
			std::cout<<((quan*price*90.0)/100.0)<<std::endl;
		}else{
			std::cout<<quan*price<<std::endl;
		}
	}
	
	return 0;
}
