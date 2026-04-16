#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    int sum=0;
    float avg=0;
    int cnt=0;
    cin>>a>>b;

    for(a;a<=b;a++)
    {
        if(a%5==0 || a%7==0)
        {
            sum+=a;
            cnt++;
            avg=(float)sum/cnt;
        }
        
    }
    cout<<sum<<" ";

    cout.precision(1);
    cout<<fixed;
    cout<<avg;
    return 0;
}