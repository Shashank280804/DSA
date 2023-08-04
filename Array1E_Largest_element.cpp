#include <iostream>
using namespace std;

int Get_largest(int arr[], int n)
{
    int largest = arr[0];// !st  element la store krte largest variable mdhe
    for (int i = 0; i < n; i++) // visits each element
    {
        if (arr[i] > largest) //next element koni arr{i} peksha motha asel tr
        {
            largest = arr[i]; // tya navin element la largest mdhe store krte
                                // ani ata pudhche comparison ya element la honar
        }
    }
    return largest;
}

int main()
{

    return 0;
}