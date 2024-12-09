#include<iostream>
using namespace std;
#include<queue>

int main(){
   priority_queue<int>p; //max-heap
   p.push(10);
   p.push(20);
   p.push(11);
   p.push(33);
   p.push(3);
   p.push(39);
   cout<<p.top()<<" "; //39 

   //delete
   p.pop();
   cout<<p.top()<<" "; //33

   //size
   cout<<"size= "<<p.size()<<" "; //5
   
   cout<<endl;
   //print  in descending order
   while(!p.empty()){
      cout<<p.top()<<" "; //33,20,11,10,3
      p.pop();
   }



   //min- heap priority queue (jo minimum hoga usko priority milegi)
   priority_queue<int, vector<int>, greater<int>> p1;   //declaration of min-heap priority queue

   //operations are same as max-heap- prioriy queue
   p1.push(10);
   p1.push(20);
   p1.push(11);
   p1.push(33);
   p1.push(3);
   p1.push(39);
   cout<<p1.top()<<" "; //3 

   //delete
   p1.pop();
   cout<<p1.top()<<" "; //10

   //size
   cout<<"size= "<<p1.size()<<" "; //5
   
   cout<<endl;
   //print  in ascending order
   while(!p1.empty()){
      cout<<p1.top()<<" "; //  10,11,20,33,39
      p1.pop();
   }



   return 0;
}