#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> tmp;
    
    for (int i = 0; i < commands.size(); ++i)
    {
        for (int j = commands[i][0] - 1; j < commands[i][1]; ++j)
            tmp.push_back(array[j]);
        
        int index = tmp.size() - 1, iTmp;
        
        for (int k = 0; k < commands[i][2]; ++k)
            for (int idx = index; idx > k; --idx)
                if (tmp[idx] < tmp[idx - 1])
                {
                    iTmp = tmp[idx];
                    tmp[idx] = tmp[idx - 1];
                    tmp[idx - 1] = iTmp;
                }
        
        answer.push_back(tmp[commands[i][2] - 1]);
        tmp.clear();
    }
    
    return answer;
}
