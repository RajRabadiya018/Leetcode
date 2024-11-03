class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.size() != goal.size()) return false;

        queue<char> q1, q2;

        for(int i = 0; i < s.size(); i++) {
            q1.push(s[i]);
        }

        for(int i = 0; i < goal.size(); i++) {
            q2.push(goal[i]);
        }

        // Check if the initial strings are equal
        if (q1 == q2) return true;

        int k = goal.size() - 1;

        while (k != 0) {
            char ch = q2.front();
            q2.pop();
            q2.push(ch);

            if (q1 == q2) return true;

            k--;
        }

        return false;
    }
};
