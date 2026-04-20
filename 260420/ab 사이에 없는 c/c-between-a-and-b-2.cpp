#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    bool satisfied = true;

    for(a;a<=b;a++)
    {
        if(a%c==0)
        {
            satisfied = false;
        }
    }
    if(satisfied == false)
    {
        cout<<"NO";
    }
    else
    cout<<"YES";
    return 0;
}