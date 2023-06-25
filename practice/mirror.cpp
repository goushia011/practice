//Program to find the mirror time of a given time

#include<iostream>

using namespace std;

int main(){
    int hr,min,mhr,mmin;
    cout<<"Enter Real time in hour and minute : ";
    cin>>hr;
    cout<<":";
    cin>>min;

    hr += min / 60;
	min %= 60;
	hr %= 12;

	if(hr <= 0)
	    hr += 12;

    mhr=11-hr;
    mmin=60-min;
    mhr += mmin / 60;

	mhr %= 12;
	mmin%= 60;
	if(mhr <= 0)
	    mhr += 12;
    
    cout<<"Mirrror time is "<<mhr;
    cout<<":";
    cout<<mmin;
}
