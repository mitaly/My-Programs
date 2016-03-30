#include<iostream>
using namespace std;
main()
{   int n=0;
    int ar[n];
    int k=0,store,temp;
    cout<<"How many elements you want to enter? ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=1;i<n;i++)
    {
        store=i;
        for(int j=k;j>=0;j--)
        {
            if(ar[j]>ar[store])
            {
                temp=ar[j];
                ar[j]=ar[store];
                ar[store]=temp;

                store=j;

            }
        }
        k++;
    }
     cout<<"\nSorted array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<ar[i];
    }
}
