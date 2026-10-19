#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n:"<<endl;
cin>>n;
int ans = 0;
int i = 0;
while (n!=0)
{
    int rem = n%2;
    ans = ans*pow(10,i)+rem;
    n = n/2;
    i++;
    
}
cout<<ans;


return 0;
}