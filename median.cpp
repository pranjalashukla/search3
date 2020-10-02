// A Simple Merge based O(n) 
// solution to find median of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;

int findMedian(int ar1[],
			int ar2[], int n)
{
	int i = 0; /* Current index of 
				i/p array ar1[] */
	int j = 0; /* Current index of 
				i/p array ar2[] */
	int count;
	int m1 = -1, m2 = -1;

	for (count = 0; count <= n; count++)
	{
		if (i == n)
		{
			m1 = m2;
			m2 = ar2[0];
			break;
		}

		else if (j == n)
		{
			m1 = m2;
			m2 = ar1[0];
			break;
		}
		if (ar1[i] <= ar2[j])
		{
			/* Store the prev median */
			m1 = m2; 
			m2 = ar1[i];
			i++;
		}
		else
		{
			m1 = m2; 
			m2 = ar2[j];
			j++;
		}
	}

	return (m1 + m2)/2;
}

// Driver Code
int main()
{
	int ar1[] = {1, 12, 15, 26, 38};
	int ar2[] = {2, 13, 17, 30, 45};

	int n1 = sizeof(ar1) / sizeof(ar1[0]);
	int n2 = sizeof(ar2) / sizeof(ar2[0]);
	if (n1 == n2)
		cout << "Median is " << getMedian(ar1, ar2, n1) ;
	else
		cout << "Doesn't work for arrays" << " of unequal size" ;
	getchar();
	return 0;
}
