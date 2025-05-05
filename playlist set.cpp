#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> k(n);
    for (int i = 0; i < n; i++){
        cin >> k[i];
    }
    set<int> plejlista;
    int r = 0;
    int l = 0;
    for (int d = 0; d < n; d++){
        while (plejlista.count(k[d]) > 0){
            plejlista.erase(k[l]);
            l++;
        }
        plejlista.insert(k[d]);
        r = max(r, d-l+1);
    }
    cout << r;
    return 0;
}
