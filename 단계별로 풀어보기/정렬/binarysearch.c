int binarysearch(int* arr, int size, int key)
{
	int left = 0, right = size - 1, mid;
	while (left <= right) 
	{
		mid = (left + right) / 2;
		if (arr[mid] < key) left = mid + 1;
		else if (arr[mid] > key) right = mid - 1;
		else return mid;
 	}
}