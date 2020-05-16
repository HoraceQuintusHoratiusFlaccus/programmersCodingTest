#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int tester1[5] = {1, 2, 3, 4, 5};
    int tester2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int tester3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int testerScore1 = 0, testerScore2 = 0, testerScore3 = 0;
    int aSize = answers.size();
    int max = 0, index;
    
    for (int i = 0; i < aSize; ++i)
    {
        if (tester1[i % 5] == answers[i])
            testerScore1 += 1;
        if (tester2[i % 8] == answers[i])
            testerScore2 += 1;
        if (tester3[i % 10] == answers[i])
            testerScore3 += 1;
    }
    
    if (testerScore1 > testerScore2)
    {
        if (testerScore1 > testerScore3)
            answer.push_back(1);
        
        else if (testerScore1 == testerScore3)
        {
            answer.push_back(1);
            answer.push_back(3);
        }
        
        else
            answer.push_back(3);
    }
    
    else if (testerScore1 == testerScore2)
    {
        if (testerScore1 > testerScore3)
        {
            answer.push_back(1);
            answer.push_back(2);
        }
        
        else if (testerScore1 == testerScore3)
        {
            answer.push_back(1);
            answer.push_back(2);
            answer.push_back(3);
        }
        
        else
            answer.push_back(3);
    }
    
    else
    {
        if (testerScore2 > testerScore3)
            answer.push_back(2);
        
        else if (testerScore2 == testerScore3)
        {
            answer.push_back(2);
            answer.push_back(3);
        }
        
        else
            answer.push_back(3);
    }
    
    return answer;
}
