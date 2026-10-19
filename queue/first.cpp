#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    /*Queue methods.
    1:-Push
    2:-Pop
    3:-size
    4:-Empty
    5:-Emplace
    6:-front 
    7:- back

    */
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
cout<<"Size of Queue is: "<<q.size()<<endl;
q.pop();

q.pop();
q.pop();
q.pop();
q.pop();
cout<<"Size of Queue is: "<<q.size()<<endl;
cout<<"Queue is empty or not -> "<<q.empty()<<endl;
q.push(5);

cout<<"firt element of queue is : "<<q.front()<<endl;
cout<<"last elements of queue is : "<<q.back()<<endl;

return 0;
}