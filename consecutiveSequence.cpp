#include <bits/stdc++.h>
using namespace std;

class consecutiveSequence
{
public:
    int sequence(vector<int> &a)
    {
        int n = a.size();
        unordered_set<int> st;

        for (int i = 0; i < n; i++)
        {
            st.insert(a[i]);
        }
        int l = 0;
        for (auto g : st)
        {
            if (st.find(g - 1) == st.end())
            {
                int x = g;
                int cnt = 1;
                while (st.find(x + 1) != st.end())
                {
                    x += 1;
                    cnt++;
                }
                l = max(l, cnt);
            }
        }
        return l;
    }
};

int main() {
    consecutiveSequence obj;
    vector<int> s = {3,2,4,2,3,3,5,2,3,4,5,6,7,78,56,4,34,34};
    int result = obj.sequence(s);
    cout << "Length of the longest consecutive sequence is: " << result << endl;
    return 0;
}