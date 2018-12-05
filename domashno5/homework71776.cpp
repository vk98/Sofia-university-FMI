#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void quickSort(int arr[], int low, int high)
{
	int i = low;
	int j = high;
	int pivot = arr[high];
    if(low < high)
    {
        while (i <= j)
        {
            while (arr[i] < pivot)i++;

            while (arr[j] > pivot)j--;

            if (i <= j)
            {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        };
		quickSort(arr, low, j);
		quickSort(arr, i, high);
    }

}


void heapify(int arr[], int size, int index)
{
	int max, left, right;
	max = index;
	left = 2 * index ;
	right = 2 * index +1;



	if (left < size && arr[left] > arr[max])
    {
		max = left;
	}
    if (right < size && arr[right] > arr[max])
    {
        max = right;
	}
	if (max != index)
    {
		swap(arr[index], arr[max]);

		heapify(arr, size, max);
	}
}

void heapSort(int arr[], int size)
{
	for (int index = size / 2 - 1; index >= 0; index--)
    {
		heapify(arr, size, 0);
	}
	for (int i = size - 1; i >= 0; i--)
    {
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}


void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
    {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
    //heap sort
	int arr[] = { 43,65,234,23,2,5 };
    int s = sizeof(arr)/sizeof(arr[0]);
	heapSort(arr, s);
	print(arr, s);

    //quick sort
	int arr1[] = { 43,65,234,23,234,54,86,87,12,14,11,2,5 };
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
	quickSort(arr1, 0, s1-1);
	print(arr1, s1);

	return 0;
}
