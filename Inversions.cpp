/**
 * Program for counting inversions.
 * @author Maria Eduarda Kawakami (https://github.com/madukm)
 * @date 27 October, 2020
 */

#include <iostream>
#include <vector>

#define inf 1000000

using namespace std;

vector<int> vec;
vector<int> L, R, A;

int merge_inversions(int start, int mid, int end){
	if(start == end) return 0;
	int cont = 0;
	int n1 = mid-start+1;
	int n2 = end-mid;
	L.resize(n1+1);
  	R.resize(n2+1);
  	for(int i=0; i<n1; i++)
  	  	L[i] = vec[start+i];
  	for(int i=0; i<n2; i++)
  	  	R[i] = vec[mid+i+1];
  	L[n1] = inf;
  	R[n2] = inf;
  	int k = start;
  	int i = 0, j = 0;
  	while(k <= end){
  	  	if(L[i] < R[j]){
  	    	A[k++] = L[i++];
  	  	}
  	  	else{
			cont += (n1 - i);
			A[k++] = R[j++];
  		}
  	}
	for(i=start; i<=end; i++)
		vec[i] = A[i];
	L.clear();
	R.clear();
	return cont;
}	

//Count inversions.
int inversions(int start, int end){
	if(start >= end) return 0;	
	int c = 0;
	int mid = (start+end)/2;
	c += inversions(start, mid);
	c += inversions(mid+1, end);
    c += merge_inversions(start, mid, end);
	return c; 
}

/**
 * @brief Main 
 * Input is of the form:
 * 5 <- size of vector 
 * 1 20 6 4 5 <- vector.
 */
int main(){
	int N;
	cin >> N;
	vec.clear();
	A.resize(N);
	for(int i=0; i<N; i++)
	{
		int aux;
		cin >> aux;
		vec.push_back(aux);
	}
	cout << inversions(0, N-1) << endl;
	
	return 0;
}
