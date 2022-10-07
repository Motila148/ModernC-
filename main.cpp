#include <iostream>
using namespace std;
#include<cmath>
#include<algorithm>


int main() {
  float square;
  cout << "Hello World!\n";
  square=sqrt(10);
  cout<<__LINE__<<endl;
  cout<<square;
  int arr[15],n;
  cout<<"\nEnter the number of Elements:";
  cin>>n;
  cout<<"Enter the elements:"<<__DATE__;
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Array=";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
   
}