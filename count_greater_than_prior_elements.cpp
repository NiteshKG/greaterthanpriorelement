
#include <iostream>

using namespace std;

int
main ()
{
  int i,j,k,n,f=0;
  int count=1;   //it is 1 as first element is always count as prior to its previous;
  cout<<"Enter size of array : ";
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
  cin>>a[i];
  for(j=1;j<n;j++){
      f=0;
      for(k=0;k<j;k++){
          if(a[k]>=a[j]){
              f=1;
              break;
          }
      }
      if(f==0)
      count++;
      
  }
  cout<<count;
 
  return 0;
}
