#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstdint>
using namespace std;

class Dollaramount
{   
    private:
    	int amount=0;
	public:
		Dollaramount(float val) : amount(val)
		{
			
		}
    float addition(Dollaramount r)
    {
    	amount = amount + r.amount;
	}
	float subtraction(Dollaramount r)
    {
    	amount = amount - r.amount;
	}

	void Addinterest(int rate,int divisor)
	{
		Dollaramount Interest
		{
		  (amount*rate+divisor/2)/divisor 
		};
		addition(Interest);
	}

	string toString()  
	{
		string dollars{std::to_string( amount/100)};
        string cents{std::to_string((amount%100))};
	return dollars +"." + (cents.size() == 1 ? "0" : " ") + cents;
	}
};

main()
{   
    Dollaramount obj1=1000;
    Dollaramount obj2=2000;
    int rate=0;
    int divisor=0;
    Dollaramount bal=200000;
    
    cout<<"After adding from obj2 into obj1 our result is: "<<endl;
    obj1.addition(obj2);
    cout<<obj1.toString()<<endl;
    
    cout<<"After subtracting obj2 from obj1 our result is: "<<endl;
    obj1.subtraction(obj2);
    cout<<obj1.toString()<<endl;
    
    cout<<"Enter Interest Rate and Divisor: (for 4% you should enter 4,100\n"<<endl;
    cout<<"Enter Interest Rate and Divisor: (for 4.1% you should enter 41,1000\n"<<endl;
    cout<<"Enter Interest Rate and Divisor: (for 411% you should enter 411,10000\n"<<endl;
    cout<<"Enter Interest Rate and Divisor: (for 4111% you should enter 4111,100000\n"<<endl;
    cout<<"Enter rate and Divisor : ";
	cin>>rate>>divisor;
    cout<<"Initial Balance:"<<bal.toString()<<endl;
    cout<<" Year:"<<"  Amount on Deposit :"<<endl;
    for(int i=1;i<=10;i++)
    {
    bal.Addinterest(rate,divisor);
	cout<< i <<"    " << bal.toString() <<endl;
}
    return 0;
}
