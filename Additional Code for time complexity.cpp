sort(a,a+num);
	//reverse(a, a + num);
	clock_t tStart = clock();
	merge_sort(1, num);
	cout << "\nTime For BEST Case";
	printf("\n %4f", (double)(clock() - tStart) / CLOCKS_PER_SEC);
