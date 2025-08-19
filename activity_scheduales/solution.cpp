#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(0); cin.tie(0);

// bool comp(string a, string b) {
// if (a.size() == b.size()) return a < b;
// else return a.size() < b.size();
// }

long long cnt = 0 ;
long long n ;
vector<string> path ;
vector<string> acts = {"Football" , "Swimming" , "Running" };

void act(int day, string prev_act){

    if ( day == n ){

        for (int i = 0 ; i < n ; i++ ){

            if (i != 0 ){
                cout << ' ';
            }

            cout << path[i];
        }
        cout << '\n';
        cnt++;
        return;
    }

    for ( string a : acts ) {

        if (a != prev_act) {

            path.push_back(a);
            act(day + 1, a);
            path.pop_back();

        }
    }
}

int32_t main() {

    FAST


    cin >> n ;

    act(0 , "") ;
    cout << cnt << '\n' ;





}
