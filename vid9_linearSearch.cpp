#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
   for (int i = 0; i < size; i++)
   {
      if (arr[i]==key)
      {
         return true;
      }
   }
   return 0;
}

int main(){
   int arr[10] = {1,2,3,4,5,6,7,8,9,-5};
   cout<<"enter the key you have to find in array"<<endl;
   int key;
   cin>>key;
   bool ans = search(arr,10,key);
   if (ans){
      cout<<"The key is present";
   }
   else
   {
      cout<<"The key is absent";
   }
}