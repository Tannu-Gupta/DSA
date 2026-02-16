 // Write a C++ program, to split the odd numbers and even numbers of onearray into two arrays.
 
#include<iostream>
using namespace std;

int main()
{
int a [ 10 ]= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, odd[10], even [10], i , o=0, e=0;

cout<<"The number of array are:"<<endl;
for ( i=0 ; i<10; i++ )
{
cout<<a[i]<<" ";
}
for ( i=0 ; i<10; i++)
 { if (a[i] % 2 !=0)
    { odd[o]=a[i];o=o+1;}
    else{ even[e]=a[i];e=e+1;}
}
cout<<endl;
 cout<<"The odd numbers are:"<<endl;
 for ( i=0 ; i<o; i++ )
 {
 cout<<odd[i]<<" ";
 }
 cout<<endl;
 cout<<"The even numbers are:"<<endl;
 for ( i=0 ; i<e; i++ )
 {
    cout<<even[i]<<" ";
    }
    return 0;
}

