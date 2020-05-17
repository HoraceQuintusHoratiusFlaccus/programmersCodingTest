#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    /* return value of unique () function */
    /* An iterator to the element that follows the last element not removed. */
    /* erase(const_iterator first, const_iterator last) */
    
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    
    return arr;
}
