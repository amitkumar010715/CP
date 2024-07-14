
// multiset is similar to priority queue 

/*NOTE:
     *SET we know
     *unordered_set- store unique but random order.
     *multiset- store all but sorted order means sorted array but in multiset we use all functionality of set this is
     advantage.*/

/*if we insert any things and dynamicaly and find position of element then we generally think about priority queue
but in priority queue it is not possible to confirm about presence of element but in multiset we can find and also
binary search apply on set as lower and upper bound.
*/

// example:

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    multiset<int> st;
    st.insert(2);
    st.insert(2);
    st.insert(4);
    st.insert(2);
    st.insert(7);
    st.insert(5);
    st.insert(9);

    auto it = st.lower_bound(4); // Get the iterator pointing to the first element not less than 4
    int index = distance(st.begin(), it);
    cout<<index;
    return 0;
}


// means we can find how many element greater_than and less_than  that 