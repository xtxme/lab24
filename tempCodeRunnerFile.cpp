int count(int a[],int n){
	set<int> x;

	for (int i = 0; i < n; i++)
	{
		x.insert(a[i]);
	}
	return x.size();
	
}