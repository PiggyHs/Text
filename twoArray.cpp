int FindKthNum(const vector<int>& arr1, const vector<int>& arr2, int K)
{
	assert(arr1.size() + arr2.size() >= K && K > 0);

	if (arr1.size() > arr2.size())
		return FindKthNum(arr2, arr1, K);

	if (arr1.size() == 0)
		return arr2[K - 1];

	if (K == 1)
		return arr1[0];
	int pos = min(K / 2, arr1.size()); int index = K - pos;
	if (arr1[pos - 1] == arr2[index - 1])
		return arr1[pos - 1];
	else if (arr1[pos - 1] < arr2[index - 1])
	{
		vector<int> arr;
		for (int i = pos; i < arr1.size();i++)
		{
			arr.push_back(arr1[i]);
		}
		return FindKthNum(arr, arr2,K-pos);
	}
	else
	{
		vector<int> arr;
		for (int i = index; i < arr2.size(); i++)
		{
			arr.push_back(arr2[i]);
		}
		return FindKthNum(arr1, arr, K - index);
	}
		
}