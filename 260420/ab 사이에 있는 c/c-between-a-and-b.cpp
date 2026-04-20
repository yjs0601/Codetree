#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;

    bool satisfied = false;
    for(a;a<=b;a++)
    {
        if(a%c==0)
        {
            satisfied=true;
        }
    }
    if(satisfied == true)
    {
        cout<<"YES";
    }
    else{
        cout<< "NO";
    }
    return 0;
}