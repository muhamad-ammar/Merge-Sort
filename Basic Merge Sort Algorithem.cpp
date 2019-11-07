/*____________________
*|///////////////////|
*|merge function|
*|///////////////////|
*
*/
void merge(int n1, int mid, int n2)
{
	//local variables & array of same size of global array
	int h, i, j, b[50], k;
	h = n1; //n1=first & n2=last & mid=middle
	i = n1;
	j = mid + 1;
	//Logic of merging
	for (; (h <= mid) && (j <= n2);i++)
	{
		if (a[h] <= a[j])
		{
			b[i] = a[h];
			h++;
		}
		else
		{
			b[i] = a[j];
			j++;
		}
		
	}
	if (h>mid)
	{//When h is greater than middle 
		for (k = j; k <= n2; k++)
		{
			b[i] = a[k];
			i++;
		}
	}
	else
	{
		for (k = h; k <= mid; k++)
		{ //Sending to array when if is not fulfilled
			b[i] = a[k];
			i++;
		}
	}
	for (k = n1; k <= n2; k++)
	{//Sending sorted data to array "a"
		a[k] = b[k];
	}
}


/*____________________
*|///////////////////|
*|merge sort function|
*|///////////////////|
*
*/
void merge_sort(int n1, int n2)
{
	int mid;
	if (n1<n2)
	{
		mid = (n1 + n2) / 2;
		//Recursion
		merge_sort(n1, mid);
		merge_sort(mid + 1, n2);
		merge(n1, mid, n2);
	}
}
