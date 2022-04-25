#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    double T, L, X, Y, Q, E;
    cin >> T >> L >> X >> Y >> Q;
    // {x,y,z}
    vector<double> E_place(3), chokudai_place={X, Y, 0};
    // vector<double> a(3),b(3);
    rep(i, Q){
        cin >> E;
        // cout << L/2 - L/2*cos(E*2*M_PI/T) << endl;
        E_place.at(1) = - 2/L * sin(E*2*M_PI/T);
        // cout << "Y=" << E_place.at(1) << endl;
        E_place.at(2) = L/2 - L/2*cos(E*2*M_PI/T);
        // cout << "Z=" << E_place.at(2) << endl;
        // chokudai_avobe_place = {X, Y, E_place.at(2)};
        // double ab = 0, dis_a = 0, dis_b = 0;
        // rep(j, 3){
        //     a.at(j) = chokudai_place.at(j) - E_place.at(j);
        //     b.at(j) = chokudai_avobe_place.at(j) - E_place.at(j);
        //     ab += a.at(j) * b.at(j);
        //     dis_a += pow(a.at(j),2);
        //     dis_b += pow(b.at(j),2);
        // }
        // double ans = acos(ab / sqrt(dis_a * dis_b)) * 180 / M_PI;
        double x_dis = chokudai_place.at(0); 
        double y_dis = E_place.at(1) - chokudai_place.at(1);
        double xy_dis = sqrt(pow(x_dis, 2) + pow(y_dis, 2));
        double z_dis = E_place.at(2);
        double radian = atan2(z_dis, xy_dis);
        double ans = radian * 180 / M_PI;
        cout <<  fixed << setprecision(8) << ans << endl;
    }
    
    return 0;
}
