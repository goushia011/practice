//Program to find the average of numbers in a given range and round it off to an integer

#include<iostream>

using namespace std;

int main() {
    int round(float number);
    int lowerbound, upperbound, sum=0, n=0, avg;
    cout<<"enter lower bound"<<endl;
    cin>>lowerbound;
    cout<<"enter upper bound"<<endl;
    cin>>upperbound;
    for(int i = lowerbound; i <= upperbound; i++)
    {
        sum = sum + i;
        n++;
    }
    cout<<sum<<endl;
    avg=sum/n;
    cout<<avg;
    int roundaverage=round(avg);
};

int round(float number){
    int beforeDecimal = (int)number;
    float afterDecimal = number - beforeDecimal;
    if(afterDecimal >= 0.5f) {
        ++beforeDecimal;
    }
    return beforeDecimal;
}
    
		