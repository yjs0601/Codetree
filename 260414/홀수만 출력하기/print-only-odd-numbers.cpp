#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    
    cin>>N;
    int i=1;

    while(i<=N)
    {
        int num;
        cin>>num;

        if(num%2==1 && num%3==0)
        {
            cout<<num<<endl;
        }
        i++;
    }

    return 0;
}