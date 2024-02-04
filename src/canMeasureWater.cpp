#include <iostream>
#include <vector>
using namespace std;


static bool backTracking(int cup1, int cup2, int water1, int water2, int target)
{
    if (cup1 + cup2 == target) {
        return true;
    }
    if (cup1 + cup2 > target) {
        return false;
    }
    int a = 0, b= 0, c =0, d= 0, e = 0;
    a = backTracking(0, cup2, water1, water2, target);
    b = backTracking(cup1, 0, water1, water2, target);
    c = backTracking(min(cup1, abs(cup2 - cup1)), max(cup1, abs(cup2 - cup1)), water1, water2, target);
    d = backTracking(min(cup1 + water1, water1), min(cup2, cup2 + water1), water1, water2, target);
    //e = backTracking(min(cup1 + water1, water1), min(cup2, cup2 + water1), water1, water2, target);
    
    return a || b || c || d || e;
    
}

bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity)
{
    return backTracking(0, 0, jug1Capacity, jug2Capacity, targetCapacity);
}