class Solution {
    string Count(string s) {
        int n = s.size();
        string ss;
        int c = 1;
        // if the current element is equal to the next element then increment 'c'
        // if not, then concatenate the current value of 'c' and the current character in the string
        // also, reset 'c' back to one
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                c++;
            } else {
                ss += to_string(c);
                ss += s[i];
                c = 1;
            }
        }
        // once the loop is done, concatenate the 'c' one more for the last character in the string
        ss += to_string(c);
        // concatenate the last character in the string
        ss += s[n - 1];
        return ss;
    }
public:
    string countAndSay(int n) {
        vector<string> v(n + 1);
        // start the string with '1'
        v[0] = "1";
        // the value of the current string is equal to the processed value of the previous string
        for (int i = 1; i <= n; i++) {
            v[i] = Count(v[i - 1]);
        }
        // return the last value of the vector
        return v[n - 1];
    }
};
