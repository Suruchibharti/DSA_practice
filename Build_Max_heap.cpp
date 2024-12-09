 #include<bits/stdc++.h>
 using namespace std;


//time-complexity of making max-heap using step-down process is : O(log n) , where n=no.of nodes 
//Heafiy(placing node at right place in max-heap)

void Heafiy(int arr[], int n, int index){
   int largest= index;
   int left= (2*index) +1;
   int right= (2*index) +2;

   if(left <n && arr[left] > arr[largest])
   largest= left;
   if(right <n && arr[right] > arr[largest])
   largest= right;
   
   if(largest != index){
      swap(arr[largest], arr[index]);
      Heafiy(arr,n,largest);
   }
}

void Build_Max_Heap(int arr[], int n){
   for(int index= (n-1)/2 ; index >=0; index--){
      Heafiy(arr, n, index);
   }
}

//sort arry using Heap sort: t.c=O(n logn) s.c=O(1 )
void sortArray(int arr[], int n){
   for(int i=n-1; i>0; i--){
      swap(arr[0], arr[i]);
      Heafiy(arr,i,0 );
   }
   cout<<endl;
}

void print(int arr[] , int n){
   cout<<"Elements of max-heap:\n";
   for(int i=0; i<n; i++) cout<<arr[i]<<"  ";
   cout<<endl;
}

 int main(){
   int arr[]={23,44,21,34,6,3,33,555,88,75};
   int n=10;
   Build_Max_Heap(arr,n);
   print(arr,n);
   sortArray(arr,n);
   print(arr,n);
   return 0;
 }
// output: 
// Elements of max-heap:
// 555  88  33  44  75  3  21  34  23  6  



/* Min-Heap */
 // for min-heap : we only need to change in heafiy 1:largest varible change name into smallest , 2: and in dono if condition arr[left] > arr[largest]   me < less than sign hoga.
 /*
void Heafiy(int arr[], int n, int index){
   int smallest= index;
   int left= (2*index) +1;
   int right= (2*index) +2;

   if(left <n && arr[left] < arr[smallest])
   smallest= left;
   if(right <n && arr[right] < arr[smallest])
   smallest= right;
   
   if(smallest != index){
      swap(arr[smallest], arr[index]);
      Heafiy(arr,n,smallest);
   }
}

void Build_Max_Heap(int arr[], int n){
   for(int index= (n-1)/2 ; index >=0; index--){
      Heafiy(arr, n, index);
   }
}

void print(int arr[] , int n){
   cout<<"Elements of min-heap:\n";
   for(int i=0; i<n; i++) cout<<arr[i]<<"  ";
   cout<<endl;
}

 int main(){
   int arr[]={23,44,21,34,6,3,33,555,88,75};
   int n=10;
   Build_Max_Heap(arr,n);
   print(arr,n);
   return 0;
 }
 */
//output : 
// Elements of min-heap:
// 3  6  21  34  44  23  33  555  88  75
