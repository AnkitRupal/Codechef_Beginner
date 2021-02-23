#include<iostream>
using namespace std;

int main(){
	
	int N=0,player_1=0,player_2=0,lead_1=0,lead_2=0,lead__1=0,lead__2=9;
	
	cin>>N;//taking the input of the number of rounds
	
	for(int i=1;i<=N;i++){
		
		cin>>player_1>>player_2;//taking the space seaprated input of the scores of both players from the user
		
		/*
		-> We check whether player1 leads the game or not!
		-> If player1 leads the game, then his lead score is stored in the lead__1 variable
		-> If this lead is greater than the previus lead of player1, then this new lead score is stored in the lead_1 variable!!
		
		-> If player2 is winning the round, then the same is donw for player2
		*/
		if(player_1>player_2){
			
			lead__1=player_1-player_2;
			
			if(lead_1<lead__1){		lead_1=lead__1;			}
			
		}else{
			
			lead__2=player_2-player_1;
			
			if(lead_2<lead__2){		lead_2=lead__2;			}
			
		}
		
		
		
	}
	
	return 0;
	
}
