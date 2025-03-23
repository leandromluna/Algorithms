#include <iostream>
#include <vector>

# Design algorithm to find the top of a unimodal sequence 
# A unimodal sequence is a sequence  of numbers that is first strictly  increasing and then strictly decreasing

int top(const vector <int>& v, int l, int r){
	//case base: when vector <= 2
	if(l+1 >= r) return max(v[l], v[r]);
	else {
        int m = (l+r)/2; //element in the middle
        // top is in the right side 
        if (v[m] < v[m+1]) return top(v, m+1, r);
        // top is in the left side
        if (v[m-1] < v[m]) top(v,l,m-1);

        else return v[m]; // v[m] is the top
                          // v[m-1] < v[m] > v[m+1]

	}

}