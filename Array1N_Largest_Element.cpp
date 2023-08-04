#include <iostream>
using namespace std;

int Get_largest(int arr[],int n)
{
    bool flag;
    for (int i = 0; i < n; i++)
    {
        flag = true;
       
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return i;
        }
    }
}

int main()
{
    int arr[]={5,8,15};
    cout<<Get_largest(arr,3);

    return 0;
}
