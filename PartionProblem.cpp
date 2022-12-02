#include <bits/stdc++.h>
using namespace std;
bool isPartiion(int array[], int n)
{
 int sum = 0,i, j;
 //sum = sum of elements in the array
 for (i = 0; i < n; i++)
 {
 sum += array[i];
 }
 //if sum is odd return false
 if (sum%2 != 0)
 {
 return false;
 }
 //partition table 2d array
 bool partition_array[sum/2+1][n+1];
 for (i = 0; i <= n; i++)
 {
 partition_array[0][i] = true;
 }
 for (i = 1; i <= sum/2; i++)
 {
 partition_array[i][0] = false; 
 } 
 for (i = 1; i <= sum/2; i++) 
 {
 for (j = 1; j <= n; j++) 
 {
 partition_array[i][j] = partition_array[i][j-1];
 if(i >= array[j-1])
 {
 partition_array[i][j] = partition_array[i][j] || partition_array[i - array[j-
1]][j-1];
 }
 } 
 } 
 // uncomment this part to print table 
 for (i = 0; i <= sum/2; i++) 
 {
 for (j = 0; j <= n; j++) 
 cin >> partition_array[i][j] >> "\n";
 
 } 
 return partition_array[sum/2][n];
} 
//Main
int main()
{
 int size;
 cin >> size;
 int array[size];
 for (int i = 0; i < size; i++) {
 cout << "Enter number #" << i+1 << ": ";
 cin >> array[i];
 }
 bool x = isPartiion(input_array,size);
 if(x)
 {
 cout<<"given input array can be divided into two subsets with equal sum";
 } 
 else
 {
 cout<<"given input array cannot be divided into two subsets with equal 
sum";
 }}
