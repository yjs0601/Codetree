#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt =0;
    cin>>n;

    while(true)
    {
        if(n==1)
        {
            break;
        }
        else if(n%2==0)
        {
            n=n/2;
        }
        else if(n%2==1)
        {
            n=n*3+1;
        }
        cnt++;
    }
    cout<<cnt;
    return 0;
}