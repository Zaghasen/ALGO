// Shell_sort.cpp   

#include <iostream>
using namespace std;
int main()
{ int i,j,k, n=6, x[6]={7,23,4,29,11,9};
  cout <<"Data Sebelum diurutkan:\n"; 
  for(i=0; i<n; i++){ cout <<x[i]<<" "; }
    for (i = n / 2; i > 0; i = i / 2) {
        for (j = i; j < n; j++) {
            for (k = j - i; k >= 0; k = k - i) {
                if (x[k + i] < x[k])
		   swap(x[k],x[k+i]); 
            }
         }
     }  
   cout <<"\n\nData Setelah diurutkan:\n";
   for(i=0; i<n; i++) { cout << x[i] << " "; }
   cout <<"\n\n";
   system("pause");
}
