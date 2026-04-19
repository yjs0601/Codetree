#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int mok=n;
    int cnt=0;

    for(int i=1;i<=n;i++)
    {
        if(mok>1)
        {
            //cout<<n<<"/"<<i<<"="<<mok<<endl;
            mok=mok/i;
            cnt++;
        }
        else 
        break;
        
        
    }
    cout<<cnt;
   
    return 0;
}