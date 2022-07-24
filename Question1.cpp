#include <iostream>
using namespace std;


int main() {
    
    int n,j,i,k;
    
    cout<<"enter the value of n\n";
    cin>>n;
    for (i=0;i<n;++i)
    {
        for (j=0;j<=n-i-2;++j)
        {
            cout<<" ";
        }
        for(k=0;k<2*i-1;++k)
        {
            cout<<"* ";
        }
    
    cout<<endl;
    }
    return 0;
    
}

