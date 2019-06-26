#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cin>>num;
    for(int i=1; i<num; i++)
        if(num%i==0)
            sum+=i;
    if(sum==num)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

