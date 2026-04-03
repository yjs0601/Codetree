#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int min;

    cin>>a>>b>>c;
 //최솟값,나누는 애가 같은애들

    if(a<=b&&a<=c)
    {
        cout<<1<<" ";
    }
    else
    cout<<0<<" ";
    if(a==b&&b==c&&a==c)
    {
        cout<<1<<endl;
    }
    else
    cout<<0;
    return 0;
}