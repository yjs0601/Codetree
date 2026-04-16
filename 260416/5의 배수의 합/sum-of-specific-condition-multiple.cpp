#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    int sum=0;
    int max,min;
    cin>>a>>b;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else if(a<b)
    {
        max=b;
        min=a;
    }
    
    for(min;min<=max;min++)
    {
        if(min%5==0)
        {
            sum+=min;
        }
    }
    cout<<sum;
    return 0;
}