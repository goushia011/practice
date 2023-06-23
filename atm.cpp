//Program to assign notes to pay a given amount where there must be minimum 5 hundred Rupee notes
//i.e to pay Rs. 500 5 one hundred Rupee notes
//and to pay Rs. 1500 2 five hundred Rupee notes and 5 one hundred Rupee notes
#include<iostream>

using namespace std;

int main(){
    int amount;
    cout<<"enter withdraw amount"<<endl;
    cin>>amount;

    if(amount % 100 != 0) 
    {
		cout<<("Amount must a multiple of 100.");
		return 0;
    }

    int offset=0;
    if (amount > 500)
     {
		offset =amount % 500;
		amount -= offset;
	}

    int twoThousand = amount / 2000;
	amount %= 2000;

	int fiveHundred = amount / 500;
	amount %= 500;

	int twoHundred = amount / 200;
	amount %= 200;

	int hundred = amount / 100;
	hundred += offset / 100;

	if (twoThousand != 0)
    {
		cout<<"Two Thousands Rupee notes : " << twoThousand<<endl;
	}

	if (fiveHundred != 0) 
    {
		cout<<"Five Hundred Rupee notes : " << fiveHundred<<endl;
	}

	if (twoHundred != 0) 
    {
		cout<<"Two Hundred rupee notes : " << twoHundred<<endl;
	}
	if (hundred != 0)
    {
		cout<<"One Hundred Rupee notes : " << hundred<<endl;
	}
	
}