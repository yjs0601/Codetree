#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int p1_tem;
    char p1;

    int A=0;
    int B=0;
    int C=0;
    int D=0;


    for(int i=1;i<=3;i++)
    {
        cin>>p1>>p1_tem;

        if(p1=='Y')
        {
            if(p1_tem>=37)
            {
                A++;
            }
            else
                C++; //증상은 있지만 체온이 정상
        }
        else
        {
            if(p1_tem>=37)//증상은 없는데 열이 37도이상
            {
                B++;
            }
            else 
                D++; // 증상도 없고 열도 없고
        }
       
    }
    
    if(A>=2){
        cout<<'E'<<endl;
    }
    else
    cout<<'N'<<endl;
   
    return 0;
}