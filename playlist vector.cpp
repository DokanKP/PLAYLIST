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
    vector <int> plejlista;
    int r = 0;
    int l = 0;
    for (int d = 0; d < n; d++){
        while (count(plejlista.begin(), plejlista.end(), k[d]) > 0){
            auto it = find(plejlista.begin(), plejlista.end(), k[l]);
            plejlista.erase(it);
            l++;
        }
        plejlista.push_back(k[d]);
        r = max(r, d-l+1);
    }
    cout << r;
    return 0;
}
