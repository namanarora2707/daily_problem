#include<bits/stdc++.h>
using namespace std;

struct Transaction{
    string sender;
    string receiver;
    float amount;
    int time;
};

int main(){
    int n;
    cin >> n;

    vector<Transaction> t(n);

    // input
    for(int i = 0; i < n; i++){
        cin >> t[i].sender >> t[i].receiver >> t[i].amount >> t[i].time;
    }

    cout << "Fraud\n";

    // compare all pairs
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            
            if(t[i].sender == t[j].sender &&
               t[i].receiver == t[j].receiver &&
               fabs(t[i].amount - t[j].amount) < 1e-6 &&
               abs(t[i].time - t[j].time) <= 60)
            {
                cout << t[i].sender << " " << t[i].receiver << " " 
                     << t[i].amount << " " << t[i].time << "\n";

                cout << t[j].sender << " " << t[j].receiver << " " 
                     << t[j].amount << " " << t[j].time << "\n";
            }
        }
    }

    return 0;
}