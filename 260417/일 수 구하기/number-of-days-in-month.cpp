#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    if(n!=2)
    {
        if(n%2==0)//짝수 해
        {
            cout<<30;
        }
        else
        cout<<31;
        
    }
    else
    cout<<28;
    return 0;
}