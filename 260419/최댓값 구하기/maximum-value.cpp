#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c; int max=-100;

    cin>>a>>b>>c;

    if(max<=a)
    {
        max=a;

        if(max<=b)
        {
            max=b;
        }
        if(max<=c)
        {
            max=c;
        }
    }
    cout<<max;
    
    
    return 0;
}