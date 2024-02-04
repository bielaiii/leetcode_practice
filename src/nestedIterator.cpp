#include <iostream>
#include <vector>
using namespace std;

class NestedInteger {
public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;

    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;

    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger>& getList() const;
};

class NestedIterator {
private:
    vector<int> vt;
    int i;
public:

    void flatten(NestedInteger &single) {
        if (single.isInteger()) {
            vt.push_back(single.getInteger()); 
            return;
        }
        for (auto it : single.getList()) {
            if (it.isInteger()) {
                vt.push_back(it.getInteger());
            } else{
                flatten(it);
            }
                
        }
    }

    NestedIterator(vector<NestedInteger>& nestedList)
    {
        i = 0;
        for (auto it : nestedList) {

            flatten(it);
        }
    }

    int next()
    {
        int val = vt[i];
        i++;
        return val;
    }

    bool hasNext()
    {
        if (i == vt.size()) {
            return false;
        }
        return true;
    }
};
