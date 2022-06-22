#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    string S = "FYJGHSQFOSTHIJZZJZISBMSIHBSCHARSBJAHUSMVSOJBBJZISTRSWHASOJOBHASMZSBWHSTFZKSFZUSMVSWFCJZISZMBWJZISBMSUMSMZGHSMASBQJGHSOWHSWFUS`HH`HUSJZBMSBWHSTMMKSWHASOJOBHASQFOSAHFUJZISTPBSJBSWFUSZMS`JGBPAHOSMASGMZCHAOFBJMZOSJZSJBSFZUSQWFBSJOSBWHPOHSMVSFSTMMKSBWMPIWBSFYJGHSQJBWMPBS`JGBPAHOSMASGMZCHAOFBJMZOSOMSOWHSQFOSGMZOJUHAJZISJZSWHASMQZSLJZUSQWHBWHASBWHS`YHFOPAHSMVSLFKJZISFSUFJORSGWFJZSQMPYUSTHSQMABWSBWHSBAMPTYHSMVSIHBBJZISP`SFZUS`JGKJZISBWHSUFJOJHOSQWHZSOPUUHZYRSFSQWJBHSAFTTJBSQJBWS`JZKSHRHOSAFZSGYMOHSTRSWHASBWHAHSQFOSZMBWJZISOMSCHARSAHLFAKFTYHSJZSBWFBSZMASUJUSFYJGHSBWJZKSJBSOMSCHARSLPGWSMPBSMVSBWHSQFRSBMSWHFASBWHSAFTTJBSOFRSBMSJBOHYVSMWSUHFASMWSUHFASJSOWFYYSTHSBMMSYFBHSTPBSQWHZSBWHSAFTTJBSFGBPFYYRSBMMKSFSQFBGWSMPBSMVSJBOSQFJOBGMFBS`MGKHBSFZUSYMMKHUSFBSJBSFZUSBWHZSWPAAJHUSMZSFYJGHSOBFABHUSBMSWHASVHHBSVMASJBSVYFOWHUSFGAMOOSWHASLJZUSBWFBSOWHSWFUSZHCHASTHVMAHSOHHZSFSAFTTJBSQJBWSHJBWHASFSQFJOBGMFBS`MGKHBSMASFSQFBGWSBMSBFKHSMPBSMVSJBSFZUSTPAZJZISQJBWSGPAJMOJBRSOWHSAFZSFGAMOOSBWHSVJHYUSFVBHASJBSFZUSQFOSXPOBSJZSBJLHSBMSOHHSJBS`M`SUMQZSFSYFAIHSAFTTJBSWMYHSPZUHASBWHSWHUIHSJZSFZMBWHASLMLHZBSUMQZSQHZBSFYJGHSFVBHASJB";

    map<char, ll> alpha1;
    rep(i, S.size()){
        alpha1[S.at(i)]++;
    }
    cout << "one string appearance" << endl;
    for(auto itr = alpha1.begin(); itr != alpha1.end(); itr++) {
        std::cout << "key = " << itr->first // キーを表示
                        << ", val = " << itr->second << "\n"; // 値を表示
    }

    map<string, ll> alpha2;
    rep(i, S.size()-1){
        alpha2[S.substr(i, 2)]++;
    }
    cout << "two string appearance" << endl;
    for(auto itr = alpha2.begin(); itr != alpha2.end(); itr++) {
        if(itr->second>=25){
            std::cout << "key = " << itr->first // キーを表示
                            << ", val = " << itr->second << "\n"; // 値を表示
        }
    }

    map<string, ll> alpha3;
    rep(i, S.size()-2){
        alpha3[S.substr(i, 3)]++;
    }
    cout << "three string appearance" << endl;
    for(auto itr = alpha3.begin(); itr != alpha3.end(); itr++) {
        if(itr->second >= 10){
            std::cout << "key = " << itr->first // キーを表示
                            << ", val = " << itr->second << "\n"; // 値を表示
        }
    }

    map<char, ll> after_HS;
    rep(i, S.size()-2){
        if(S.at(i)=='H' && S.at(i+1)=='S'){
            after_HS[S.at(i+2)]++;
        }
    }
    cout << "afterHS" << endl;
    for(auto itr = after_HS.begin(); itr != after_HS.end(); itr++) {
        std::cout << "key = " << itr->first // キーを表示
                        << ", val = " << itr->second << "\n"; // 値を表示
    }

    rep(i, S.size()){
        if(S.at(i)=='S') S.at(i)=' ';
        if(S.at(i)=='H') S.at(i)='e';
        if(S.at(i)=='B') S.at(i)='t';
        if(S.at(i)=='W') S.at(i)='h';
        if(S.at(i)=='J') S.at(i)='i';
        if(S.at(i)=='Z') S.at(i)='n';
        if(S.at(i)=='I') S.at(i)='g';
        if(S.at(i)=='A') S.at(i)='r';
        if(S.at(i)=='F') S.at(i)='a';
        if(S.at(i)=='T') S.at(i)='b';
        if(S.at(i)=='M') S.at(i)='o';
        if(S.at(i)=='U') S.at(i)='d';
        if(S.at(i)=='O') S.at(i)='s';
        if(S.at(i)=='V') S.at(i)='f';
        if(S.at(i)=='Y') S.at(i)='l';
        if(S.at(i)=='G') S.at(i)='c';
        if(S.at(i)=='P') S.at(i)='u';
        if(S.at(i)=='`') S.at(i)='p';
        if(S.at(i)=='C') S.at(i)='v';
        if(S.at(i)=='K') S.at(i)='k';
        if(S.at(i)=='L') S.at(i)='m';
        if(S.at(i)=='X') S.at(i)='j';
        if(S.at(i)=='R') S.at(i)='y';
        if(S.at(i)=='Q') S.at(i)='w';
    }

    rep(i, S.size()){
        cout << S.at(i);
    }


    return 0;
}

