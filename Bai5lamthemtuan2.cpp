#include <iostream>
using namespace std;
int main() {
   int n,i,j;
   cout<<"Nhap vao chieu dai n: \n";
   cin>>n;
   for(i = 1; i <= n; i++) {
      for(j = 1; j <= n-i; j++)
        cout<<" ";
 
      for(j = 1; j <= i; j++)
         cout<<"* ";
         cout<<endl;
   }
   return 0;
}
