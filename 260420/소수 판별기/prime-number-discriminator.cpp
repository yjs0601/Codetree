#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    bool satisfied = true;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0) //n을 i로 나눌때, 
        {
            if(i!=1&&i!=n)//i가 1과 다르거나 5와 다르다면 false 
            {
                satisfied = false;
            }
        }
    }

    if(satisfied==true)
    {
        cout<<"P";
    }
    else
    cout<<"C";
    return 0;
}