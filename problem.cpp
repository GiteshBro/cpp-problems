#include <iostream>

using namespace std;

int main()
{
    int n,sum=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<sum<<endl;
        sum=sum+2;
    }

    return 0;
}
