#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    float meal_cost;
    int tip, tax;
    cin >> meal_cost;
    cin >> tip;
    cin >> tax;
    float total_cost;
    total_cost = meal_cost +(meal_cost*tip/100.0)+(meal_cost*tax/100.0);
    cout << "The total meal cost is " << round(total_cost) << " dollars.";
    return 0;
}
