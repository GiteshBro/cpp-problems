#include <iostream>

using namespace std;

int main()
{
    int n,sum=1;
    cin>>n;
    if(n%2==0){
        n=n-1;
    }
    for(int i=0;i<n;i++){
        cout<<sum<<" ";
        sum=sum+2;
    }

    return 0;
}
