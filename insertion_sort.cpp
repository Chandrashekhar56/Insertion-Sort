#include<iostream>
using namespace std;
void insertion_sort(int arr1[],int total_size_of_arr1)
{
    int l, k, temporary;
    for (l = 1; l<=total_size_of_arr1; l++) {
        temporary = arr1[l];
        k = l - 1;
        while(k>=0 && temporary <= arr1[k])
        {
            arr1[k+1] = arr1[k];
            k=k-1;
        }
        arr1[k+1] = temporary;
    }

}
int main()
{
        int arr1[]={4,2,5,1,7,3},z;
        int total_size_of_arr1=sizeof(arr1)/sizeof(arr1[0]);
        insertion_sort(arr1,total_size_of_arr1);
        for(z=0;z<total_size_of_arr1;z++)
        {
            cout<<arr1[z]<<" ";
        }
        return 0;
}
