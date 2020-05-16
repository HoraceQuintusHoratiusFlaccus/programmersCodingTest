#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int aSize = arr.size(), tmp;
    bool isExist = false;
    
    for (int i = 0; i < aSize; ++i)
        if (!(arr[i] % divisor))
        {
            answer.push_back(arr[i]);
            isExist = true;
        }
    
    if (!isExist)
    {
        answer.push_back(-1);
        return answer;
    }
    
    aSize = answer.size();
    
    for (int j = 0; j < aSize - 1; ++j)
    {
        for (int k = 0; k < aSize - j - 1; ++k)
            if (answer[k] > answer[k + 1])
            {
                tmp = answer[k];
                answer[k] = answer[k + 1];
                answer[k + 1] = tmp;
            }
    }
    
    return answer;
}
