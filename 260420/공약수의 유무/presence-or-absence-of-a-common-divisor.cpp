#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    bool satisfied = false;

    for(a;a<=b;a++)
    {
        if(1920%a==0 && 2880%a==0)
        {
            satisfied = true;
        }
    }
    if(satisfied == true)
    {
        cout << 1 ;
    }
    else cout<<0;
    return 0;
}