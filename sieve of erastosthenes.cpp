#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
#define MAX 100000
main(){
     long n1,n2;int t;
  long i,j;
  cout<<"Enter test cases: ";
    cin>>t;
    if(!(t<=10)){exit(0);}
    for(int k=0;k<t;k++){
        cout<<"\nEnter two numbers: ";
cin>>n1>>n2;

int prime[MAX];

for(i=2;i<=n2;i++)
    {
      prime[i]=1;
    }


  prime[0]=0;
  prime[1]=0;

  for( i=2;i<=sqrt(n2);i++)
  {

      for(j=2;j<=n2/i;j++)
      {
          if(prime[i]==1)
      prime[i*j]=0;
      }


  }
  cout<<"Prime numbers: ";


  for(int i=n1;i<=n2;i++)
  {
  if(prime[i]==1)cout<<i<<"\n";
  }
  cout<<"\n";
}

}
