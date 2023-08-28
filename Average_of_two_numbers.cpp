#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n1,n2;
    cin>>n1>>n2;
    float k;
    k=(n1+n2)/2;
    cout<<"Average of"<<" "<<n1<<" "<<"and"<<" "<<n2<<" "<<"is:"<<" "<<fixed<<setprecision(2)<<k;
}