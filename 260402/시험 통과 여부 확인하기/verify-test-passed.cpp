#include <iostream>
using namespace std;

int main() {
    int n,diff;

    cin>>n;

    if(n>=80)
    {
        cout<<"pass";
    }
    else
    {
        diff = 80-n;
        cout<<diff<<" more score";
    }
    return 0;
}