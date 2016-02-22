#include <iostream>

using namespace std;

int main()
{
// Variable to hold share purchase and selling info.
    int stocksPurchased, stockSold;
    double commission, totalPurchase, totalSell, totalBuyCommission, totalSellCommission, purchasePrice, sellingPrice, profit;

    // User input

    cout << "Please enter the number of stocks purchased.";
    cin >> stocksPurchased;
    cout << "Please enter the purchase price per stock.";
    cin >> purchasePrice;
    cout << "Please enter the broker's commission rate.";
    cin >> commission;
    cout << "Please enter the number of stocks sold.";
    cin >> stockSold;
    cout << "Please enter stock selling price per stock.";
    cin >> sellingPrice;

    // Calculations for program

    totalPurchase = stocksPurchased * purchasePrice;
    totalSell = stockSold * sellingPrice;
    totalBuyCommission = totalPurchase * commission;
    totalSellCommission = totalSell * commission;
    profit = ((totalSell - totalPurchase) - (totalBuyCommission + totalSellCommission));

    // Program display output.

    cout << "The total amount paid for the stock purchase was: " << totalPurchase << endl;
    cout << "The total amount paid in commission for the purchase was: " << totalBuyCommission << endl;
    cout << "The total amount the stocks were sold for was: " << totalSell << endl;
    cout << "The total amount paid in commission for the sale was: " << totalSellCommission << endl;
    cout << "The total profit made from the stock transaction was: " << profit << endl;
    return 0;
}
