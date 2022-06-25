//                                                           Standard template library
//                                                                    1.) Array
#include<iostream>
#include<array>
using namespace std;                                
int main()
{
    array<int,4>a = {1,2,35,6};
    int size = a.size();
    cout<<size<<endl;
    for(int i = 0 ;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"Element at 2nd index"<<a.at(2)<<endl;
    cout<<"Empty or not"<<a.empty()<<endl;
    cout<<"First element"<<a.front()<<endl;
    cout<<"Last element"<<a.back()<<endl;

    return 0;
}
  



//                                                                    2.) VECTOR

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;
    // int determine the vectr type and v is the name of vector

    cout<<"Capacity of vector "<<v.capacity()<<endl;
    v.push_back(76);
    cout<<"Capacity of vector "<<v.capacity()<<endl;
    v.push_back(98);
    cout<<"Capacity of vector "<<v.capacity()<<endl;
    v.push_back(56);
    cout<<"Capacity of vector "<<v.capacity()<<endl;

    cout<<"size of vector"<<v.size()<<endl;

    // capacity means max possible numbers which can be accomodated in the vector.
    // size means total number of elements occupied by vector currently.
    // agr vector ki size kam rehti h then it doubles its size.

    cout<<v.at(2)<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    // printing array before pop
    cout<<"vector before pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    
    // printing array after pop
    v.pop_back();
    cout<<"vector after pop"<<endl;
    for (int i:v)
    {
        cout<<i<<endl;
    }
    
    vector<int> b(5,1);
    // here 5 is the size of vector and 1 means all 5 elements will be initialised by 1(default is 0)
    cout<<"Printing vector b"<<endl;
    for(int i:b){
        cout<<i<<endl;
    }

    vector<int> c(v);
    // here vector v is copied inside a new vector c
    cout<<"Printing vector c"<<endl;
    for(int i:c){
        cout<<i<<endl;
    }
    
    return 0;
}



//                                                               3.) DEQ
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(11);
    d.push_front(22);    
    d.push_front(25);    

    // push means to add
    for(int i:d){
    cout<<i<<endl;
    }

    // d.pop_back();
    // for(int i:d){
    // cout<<i<<endl;
    // }


    // d.pop_front();
    // for(int i:d){
    // cout<<i<<endl;
    // }

    cout<<"element at first index is "<<d.at(1)<<endl;

    cout<<"first element "<<d.front()<<endl;
    cout<<"last element "<<d.back()<<endl;
    
    cout<<"empty or not "<<d.empty()<<endl;

    // to erase single or list of elements from deque
    cout<<"size of deque before erasing "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); 
    // in erase func we have to tell the range that from where to where it should get erased
    cout<<"size of deque after erasing "<<d.size()<<endl;

    return 0;
}

 

//                                                  4.) LIST

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(34);
    l.push_front(27);

    for(int i:l){
        cout<<i<<endl;
    }

    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<endl;
    }

    list<int>n(5,100);
    for(int i:n){
        cout<<i<<endl;
    }
    
    return 0;
}


//                                               5.) STACK