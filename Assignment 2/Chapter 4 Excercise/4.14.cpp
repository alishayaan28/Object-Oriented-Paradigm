#include<iostream>
using namespace std;
int main(){
	int accountnmbr;
	float Begblnce,Totalcharges,Totalcredits,Creditslimit,nblnce;
	while(accountnmbr!=-1){
		cout<<"Enter the Account Number(-1 to quite) :";
		cin>>accountnmbr;
		cout<<"Enter the Begining Balance :";
		cin>>Begblnce;
		cout<<"Enter Total Charges :";
		cin>>Totalcharges;
		cout<<"Enter Total Credits :";
		cin>>Totalcredits;
		cout<<"Enter Credits Limit :";
		cin>>Creditslimit;
		nblnce= (Begblnce+Totalcharges)-Totalcredits;
		cout<<"New Balance is :"<<nblnce<<endl;
		cout<<"Account Nu,ber is :"<<accountnmbr<<endl;
		cout<<"Credit Limit :"<<Creditslimit<<endl;
		if(Creditslimit<nblnce){
			cout<<"Credit Limit Exceeded :"<<endl;;
		}
		cout<<"Enter Account Number (-1 to quit) :";
	    cin>>accountnmbr;
	}	
	return 0;
}
