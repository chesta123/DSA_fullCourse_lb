#include<iostream>
using namespace std;
void update(int array[],int size){
    array[4]=98;
    cout<<"printing the array";
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }cout<<endl;
    cout<<"returning to main function";
}



int main(){
    int array[5]={1,2,3,56,7};
    update(array,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }
}