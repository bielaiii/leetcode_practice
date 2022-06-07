class Solution {
public:
    string alienOrder(vector<string>& words) {
        unordered_map<char, unordered_set<char>> graph;
        unordered_map<char, int> inDegress;

        // 建图
        for (auto& word : words) {
            for (auto& ch : word) {
                if (!graph.count(ch)) {
                    graph[ch] = {};
                } 
                if (!inDegress.count(ch)) {
                    inDegress[ch] = 0;
                }
            }
        }

        // 计算邻接表和入度
        for (int i = 1; i < words.size(); ++i) {
            int j = 0;
            int len = min(words[i - 1].size(), words[i].size());
            for (; j < len; ++j) {
                char ch1 = words[i - 1][j];
                char ch2 = words[i][j];
                if (ch1 != ch2) {
                    if (!graph[ch1].count(ch2)) {
                        graph[ch1].insert(ch2);
                        inDegress[ch2]++;
                    }
                    break;
                }
            }
            // 特殊判断
            if (j == len && words[i - 1].size() > words[i].size()) {
                return {};
            }
        }

        string ret{""};
        queue<char> que;
        // 入度为 0 的点
        for (auto& d : inDegress) {
            if (d.second == 0) {
                que.push(d.first);
            }
        }
        // BFS
        while (!que.empty()) {
            char ch = que.front();
            que.pop();
            ret.push_back(ch);

            for (auto& c : graph[ch]) {
                inDegress[c]--;
                if (inDegress[c] == 0) {
                    que.push(c);
                }
            }
        }
        
        if (ret.size() != inDegress.size()) {
            return "";
        }
        return ret;
    }
};