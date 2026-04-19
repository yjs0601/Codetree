#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    int prod=1;
    cin>>A>>B;

    for(int i=A;i<=B;i++)
    {
        prod=i*prod;
    }
    cout<<prod;
    return 0;
}