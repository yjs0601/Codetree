#include <iostream>
using namespace std;

int main() {
    int n,width;

    cin>>n;

    width = n*n;

    if(n<5)
    {   
        cout<<width<<endl;
        cout<<"tiny"<<endl;
    }
    else
    cout<<width;

    return 0;
}