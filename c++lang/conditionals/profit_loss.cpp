#include <iostream>
using namespace std;

int main(){
    float cost_price, selling_price;
    cout << "Enter the amount that you spend to buy this item:";
    cin >> cost_price;
    cout << "Enter the amount in which you sold it: ";
    cin >> selling_price;

    if(cost_price < selling_price){
        cout << "Hurray!! You make a profit of ruppes " << selling_price - cost_price <<endl;
    }
    else if(cost_price > selling_price){
        cout << "Oops!! You had a loss of ruppes " << cost_price - selling_price <<endl;
    }
    else{
        cout << "You neither make a profit nor a loss" <<endl;
    }
}