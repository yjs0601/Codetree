#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int sum=0; float avg=0;
    int cnt=0;

    for(int i=1;i<=10;i++)
    {
        cin >>n;
        if(n>=0 && n<=200)
        {
            sum+=n;
            cnt++;
            avg=(float)sum/cnt;
        }
    
    }
    cout<<sum<<" ";
    cout<<fixed;
    cout.precision(1);
    cout<<avg;
    return 0;
}