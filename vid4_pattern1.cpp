#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int i  = 1;
    int k = 0;
    while (i<=m)
    {
        int j = 1;
        while (j<=m-k)
        {
            cout<<"* ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        k=k+1;
    }
    return 0;
}