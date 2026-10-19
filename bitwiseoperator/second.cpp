#include<iostream>
using namespace std;
//fibonacci series...........
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int a =0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <= n-2; i++)
    {
       
        int nextTerm = a+b;
        cout<<nextTerm<<" ";
        a = b;
        b = nextTerm;
      
      
    }
    
return 0;
}
