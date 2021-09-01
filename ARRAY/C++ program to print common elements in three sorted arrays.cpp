
#include <bits/stdc++.h>
using namespace std;
void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
{
    int i =0, j = 0, k = 0;
    
    while (i < n1 && j < n2 && k < n3)
    {
         if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
         {   cout << ar1[i] << " ";   i++; j++; k++; }
         
         else if  (ar1[i] < ar2[j])
             i++;
         else if  (ar2[j] < ar3[k])
             j++;
         else
             k++;
    }
}

int main()
{
    int ar1[] = {21, 54, 65, 75, 854};
    int ar2[] = {21, 54, 75};
    int ar3[] = {20, 21, 54};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    int n3 = sizeof(ar3)/sizeof(ar3[0]);
      
    cout << "common element are ";
    findCommon(ar1,ar2,ar3,n1,n2,n3);
    return 0;
}
