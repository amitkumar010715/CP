#include<bits/stdc++.h>
using namespace std;

int main() {
    int pages[] = {0, 1, 2, 3, 4, 5, 4, 7, 5, 9};
    int num_pages = sizeof(pages) / sizeof(pages[0]);

    int num_frames = 4;

    int page_faults = 0;

    list<int> lru_list;
    unordered_map<int, list<int>::iterator> lru_map;

    for (int i = 0; i < num_pages; i++) {
        int page = pages[i];
        if (lru_map.find(page) != lru_map.end()) {
            lru_list.erase(lru_map[page]);
            lru_list.push_front(page);
            lru_map[page] = lru_list.begin();
            cout << "Page " << page << " hit!" << endl;
        } else {
            page_faults++;
            if (lru_list.size() < num_frames) {
                lru_list.push_front(page);
                lru_map[page] = lru_list.begin();
            } else {
                int lru_page = lru_list.back();
                lru_list.pop_back();
                lru_map.erase(lru_page);
                lru_list.push_front(page);
                lru_map[page] = lru_list.begin();
                cout << "Page " << lru_page << " removed from memory." << endl;
            }
        }
    }

    cout << "Total page faults: " << page_faults << endl;
    cout<<"page hit:"<<num_pages-page_faults<<endl;
    return 0;
}
