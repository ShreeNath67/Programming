// Program to find frequency of each elements in the array

#include<iostream>
using namespace std;

int main()
{
  int arr[] ={1,2,8,3,2,2,2,5,1};

  int length = sizeof(arr[0]);

  int fr[length];
  int visited = -1;

  for(int 1=0; i<length; i++)
  {
    int count =1;
    for(int j= i+1; j<length; j++)
    {
        if(arr[i]==arr[j])
        count ++;

       fr(j) = visited;
    }
  }
}