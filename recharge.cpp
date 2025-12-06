#include <iostream>
using namespace std;

int main() {
    int N;
    float amount;
    float total = 0;
    int smallCount = 0;

    cout << "Enter number of recharges: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        cout << "Enter amount for recharge " << i << ": ";
        cin >> amount;

        total = total + amount;

        if(amount < 200) {
            cout << "Small Recharge" << endl;
            smallCount++;
        }
    }

    cout << "\nTotal Amount Recharged = " << total << endl;
    cout << "Total Small Recharges = " << smallCount << endl;

    return 0;
}