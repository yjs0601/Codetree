#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,num;
    int sum=0; int cnt=0;
    float avg=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>num;
        sum+=num;
        cnt++;
        avg=(float)sum/cnt;
        
    }
    cout<<sum<<" ";
    cout<<fixed;
    cout.precision(1);
    cout<<avg<<" ";
    return 0;
}