#include<iostream>
using namespace std;
main()
{
    int n=0;
    int ar[n],j,small,index,temp;

    cout<<"Enter number of elements to enter: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    cout<<"\nSorted array:\n";
    for(int i=0;i<(n-1);i++)
    {
        small=ar[i];

        for(j=i+1;j<=(n-1);j++)
        {
            if(small>ar[j])
            { small=ar[j];
              index=j;
            }
        }

        temp=ar[index];
        ar[index]=ar[i];
        ar[i]=temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<"\n";
    }
}
