#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int sum=0;
    char a;

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
            if(sum==n)
            {
               a='P';
            }
            else
            a='N';
        }
    }
    cout<<a;
    return 0;
}