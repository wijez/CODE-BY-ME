//CPP program to find all subsets by backtracking.
#include <bits/stdc++.h>
using namespace std;
int cnt = 0 ;
 
// For our vector subset, at every step we have A.size()-i-1
// choices to include. A loop helps us to choose each element
// and then move to the indices further present in the array.
// At the end we backtrack to choose a different index.
void subsetsUtil(vector<int>& A, vector<vector<int> >& res,
                 vector<int>& subset, int index)
{
    res.push_back(subset);
      // Loop to choose from different elements present
      // after the current index 'index'
    for (int i = index; i < A.size(); i++) {
 
        // include the A[i] in subset.
        subset.push_back(A[i]);
 
        // move onto the next element.
        subsetsUtil(A, res, subset, i + 1);
 
        // exclude the A[i] from subset and triggers
        // backtracking.
        cnt ++ ;
        subset.pop_back();
    }
 
    return;
}
 
// below function returns the subsets of vector A.
vector<vector<int> > subsets(vector<int>& A)
{
    vector<int> subset;
    vector<vector<int> > res;
 
    // keeps track of current element in vector A
      // and the number of elements present in the array subset
    int index = 0;
    subsetsUtil(A, res, subset, index);
 
    return res;
}
 
// Driver Code.
int main()
{
    // find the subsets of below vector.
    vector<int> array = {3 ,1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7 };
 
    // res will store all subsets.
    // O(2 ^ (number of elements inside array))
    // because total number of subsets possible
    // are O(2^N)
    vector<vector<int> > res = subsets(array);
 
    // Print result
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
 
    return 0;
}