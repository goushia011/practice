//Program to find the multiples of a given number in a given range

#include<iostream>

using namespace std;

int main(){
    int lowerbound,upperbound,multiplier;
    cout<<"Enter lower and upper bound: ";
    cin>>lowerbound>>upperbound;
    cout<<endl;

    cout<<"Enter the multiplier: ";
    cin>>multiplier;

    for(int i=lowerbound;i<=upperbound;i++){
        if(i%multiplier==0){
           cout<<i<<" ";
        }
    }


}
