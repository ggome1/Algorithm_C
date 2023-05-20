int unique(int* arr, int size) 
{
	int i, j = 0;
	for (i = 1; i < size;i++) {
		if (arr[j] == arr[i]) continue;
		arr[++j] = arr[i];
	}
	return ++j;
}