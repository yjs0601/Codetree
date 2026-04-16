#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;int num;
    int sum=0;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>num;
        if(num%2==1 && num%3==0)
        {
            sum+=num;
        }
    }
    cout<<sum;
    return 0;
}