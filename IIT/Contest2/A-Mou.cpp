#include<iostream>
using namespace std;
int main()
{
    int t,i,n,count,smallest,pos;
    int *a=new int[100];
    cin>>t;

    for(i=1;i<=t;i++){
        cin>>n;

        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        count=0;

        for(int k=0;k<n-1;k++){
            smallest=101;
            for(int j=n-count-1;j>=count;j--){
                if(smallest>a[j]){
                    smallest=a[j];
                    pos=j;
                }
            }
            if(a[pos]!=a[count]){
                a[pos]=a[count];
                a[count]=smallest;
                count++;
            }
        }
        cout<<"Case "<<i<<": "<<count<<endl;
    }
    delete[] a;
    return 0;
}
