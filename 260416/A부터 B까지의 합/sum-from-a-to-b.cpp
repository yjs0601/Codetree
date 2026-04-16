#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    int sum=0;
    cin>>A>>B;

    for(A;A<=B;A++)
    {
        sum+=A;
    }
    cout<<sum;
    return 0;
}