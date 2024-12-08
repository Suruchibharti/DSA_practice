#include<bits/stdc++.h>
using namespace std;

// Max-heap , operations : insert node in max-heap, deletion in max-heap : both of t.c= O(log n) for one node  
class MaxHeap{
   private:
   int *arr;
   int size; //total elements in heap
   int total_size; //total size of heap

   public:
   MaxHeap(int n){
      arr = new int[n];
      size=0;
      total_size=n;
   }

   //insertion into heap
   void insert(int x){
      if(size==total_size){
         cout<<"overlow ";
         return;
      }
      arr[size] = x;
      int index=size;
      size++;

      //maxheap banana hai , means insert kiya hua usko sahi jagh pe rakhna hai
      while(index >0 && arr[(index-1) /2] < arr[index]){
         swap(arr[index] , arr[(index-1) /2]) ;
         index= (index-1)/2;
      }
      cout<<arr[index]<<" elements is inserted into heap ";
      cout<<endl;
   }

   //print maxheap
   void print(){
        cout<<"elements of max-heap: ";
      for(int i=0; i<size; i++){
         cout<<arr[i]<<" ";
      }
      cout<<endl;
   }


     //Heafiy banana for deletion
     void Heafiy(int index){
     //make heafiy(node ko sahi jagah pe rakhna max-heap me)
      int largest = index;
      int left = 2*index +1;
      int right = 2*index +2;
      if(left < size && arr[largest] < arr[left]) 
      largest = left;
      if(right <size && arr[largest] < arr[right])
      largest = right;

      if(largest != index){
         swap(arr[largest] , arr[index]);
         Heafiy(largest);
      } 
    }

   //deletion from heap
   void Delete(){
      if(size==0){
         cout<<"underflow\n";
         return;
      }       
      cout<<arr[0]<<" is deleted from max-heap"<<endl;
      arr[0] = arr[size-1];
      size--;

      if(size == 0) return;
      Heafiy(0);      
   }  
};

int main(){
   MaxHeap H1(6);
   H1.insert(4);
   H1.insert(14);
   H1.insert(11);
   H1.insert(114);
   H1.insert(24);
   H1.insert(1);
   H1.insert(10);
   H1.print();
   H1.Delete();
   H1.Delete();
   H1.Delete();
   H1.print();
   return 0;
}
