#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int age;
    int sum=0;
    int cnt=0;


    while(true)
    {
        cin>>age;

        if(age/10!=2)
        {
            break;
        }
        sum+=age;
        cnt++;
    }

    cout<<fixed;
    cout.precision(2);
    cout<<(float)sum/cnt<<endl;
    
    return 0;
}