#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=0;
    cin>>n;

    while(true)
    {
        
        n=n/2;
        if(n==0)
        {
            break;
        }
        cnt++;
    }
    cout<<cnt;
    return 0;
}