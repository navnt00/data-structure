#include <iostream>
using namespace std;
int linearsearch(int a[],int n, int val)
{
    //going through array linearly
    for(int i = 0; i < n; i++)
    {
        if(a[i] == val)
        return i+1;
    }
    return -1;
}
int main(){
    int a[] = {45 , 67 , 98 , 78 , 87 , 34 , 12}
    int val = 98;
    int n = sizeof(a) / sizeof(a[0]);
    int res = linearsearch(a, n, val);
    cout<<"the element of the array are-";
    for (int i = 0; i < n; i++)
    cout<<a[i]<<" ";
    cout<<"\n element to be searched is -"<<val;
    if (res == -1)
    cout<<"\n element is not present in the array";
    else
    cout<<"\n element is present at"<<res<<"position of array";
    return 0;

}
