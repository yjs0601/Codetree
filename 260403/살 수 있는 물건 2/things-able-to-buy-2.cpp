#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int price;
    cin>>price;

    if(price>=3000)
    {
        cout<<"book"<<endl;
    }
    else if(price>=1000)
    {
        cout<<"mask"<<endl;
    }
    else if(price>=500)
    {
        cout<<"pen"<<endl;
    }
    else
    cout<<"no";
    return 0;
}