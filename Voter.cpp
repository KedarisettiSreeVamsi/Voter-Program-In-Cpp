#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<vector>
using namespace std;
int iid=4354;int a[100],k=iid;vector <string> voter;int i=0;
void voter1(){
	int id=k;string vote;
	k++;
	a[i]=id;
	cout<<"1.VOTE FOR MAYOR"<<endl;
	cout<<"A.Pincher,Penny"<<endl<<"B.Dover,Skip"<<endl<<"C.Perman,Sue"<<endl;
	cout<<"2.PROPOSITION 17"<<endl;
	cout<<"D.YES"<<endl<<"E.NO"<<endl;
	cout<<"3.MEASURE 1"<<endl;
	cout<<"F.YES"<<endl<<"G.NO"<<endl;
	cout<<"4.MEASURE 2"<<endl;
	cout<<"H.Yes"<<endl<<"I.NO"<<endl;
	cout<<"Enter your vote:";
	cin>>vote;
	voter.push_back(vote);
	i++;
	cout<<"Your voter id is "<<id<<endl;
}
void search(){
	int id1,flag=0;
	cout<<"Enter your id to search:";
	cin>>id1;
	for(int j=iid;j<iid+voter.size();j++){
		if(j==id1){
			cout<<"Your voter id is "<<j<<" and your vote is "<<voter[j-iid]<<endl;flag=1;break;
		}
		else {
			flag=0;
		}
	}
	if(flag==0){
		cout<<"Your voter id not found"<<endl;
	}
}
void count_votes(){
	int count[3]={0,0,0},id11=k,can=0;
	cout<<" ---- \t ------"<<endl;
	cout<<"| ID |"<<"\t| Vote |"<<endl;
	cout<<" ---- \t ------"<<endl;
	for(int j=0;j<k-iid;j++){
		cout<<"|"<<j+iid<<"|\t"<<"| "<<voter[j]<<" |"<<endl;
		if(voter[j][0]=='a'||voter[j][0]=='A'){
			count[0]++;
		}
		else if(voter[j][0]=='b'||voter[j][0]=='B'){
			count[1]++;
		}
		else{
			count[2]++;
		}
	}
	cout<<" ---- \t ------"<<endl<<endl;
	int max=count[0];
	for(int l=0;l<3;l++){
		if(max<count[l]){
			max=count[l];
		}
	}
	for(int l=0;l<3;l++){
		if(max==count[l]){
			can=l+1;
		}
	}
	switch(can){
		case 1:cout<<"Pincher,Penny is the Mayor of The City "<<endl;
				cout<<"Congratulations...!"<<endl;
				break;
		case 2:cout<<"Dover,Skip is the Mayor of The City "<<endl;
				cout<<"Congratulations...!"<<endl;
				break;
		case 3:cout<<"Perman,Sue is the Mayor of The City "<<endl;
				cout<<"Congratulations...!"<<endl;
				break;
	}
	exit(0);
}

int main(){
	int t;
	cout<<"\t\t\t\t------------Welcome to Voting Center-------------"<<endl;
	do{
	cout<<"Enter 1 to vote"<<endl<<"2 to search your vote "<<endl<<"3 for counting the votes"<<endl;
	int n1;
	cin>>n1;
	switch(n1){
	case 1:voter1();break;
	case 2:search();break;
	case 3:count_votes();break;	
	}
	cout<<"Enter 1 to continue and 0 to discontinue"<<endl;
	cin>>t;
	}while(t!=0);
}
