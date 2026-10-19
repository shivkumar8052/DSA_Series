#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // bool count = true;
    // for (int i = 2; i <= n-1; i++)
    // {
    //    if(n%i == 0){
    //     count = false;
    //     break;// break statement...
    //    }
    // }

    // if (count)
    // {
    //     cout<<"Given no. is prime no.";
    // }
    // else{
    //     cout<<"Give no. is Not prime no.";
    // }
    
    for (int i = 0; i <5; i+=1)
    {
      for (int j = i; j <=5; j++)
      {
        if (i+j == 10)
        {
            break;
        }
        
        cout<<i<<" "<<j<<endl;
      }
      
        
    }
    
    
    
return 0;
}