#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
    int openBrackets = 0;
    int result = 0;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '(') openBrackets++;
        else if(s[i] == ')') openBrackets--;
        result = max(result, openBrackets);
    }
    return result;
}

int main() {
    string s = "(1+(2*3)+((8)/4))+1";
    cout << "Maximum Depth of Nested Parentheses: " << maxDepth(s) << endl;
    return 0;
}
