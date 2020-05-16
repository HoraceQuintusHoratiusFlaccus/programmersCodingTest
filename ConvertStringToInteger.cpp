#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    if (s[0] == '-')
    {
        s = s.substr(1);
        answer = stoi(s);
        answer *= -1;
        return answer;
    }
    
    else if (s[0] == '+')
        s = s.substr(1);
    
    answer = stoi(s);
    
    return answer;
}
