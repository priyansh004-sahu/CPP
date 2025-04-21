#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk lamp", "Home"},
    };

    // Print products
    cout << "Products:\n";
    for (const auto &product : products) {
        cout << "ID: " << product.productID << ", Name: " << product.name 
             << ", Category: " << product.category << endl;
    }

    deque<string> recentCustomers = {"C001", "C002", "C003"};
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    // Print recent customers
    cout << "\nRecent Customers:\n";
    for (const auto &customer : recentCustomers) {
        cout << customer << " ";
    }
    cout << endl;

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    // Print order history
    cout << "\nOrder History:\n";
    for (const auto &order : orderHistory) {
        cout << "Order ID: " << order.orderID << ", Product ID: " << order.ProductID
             << ", Quantity: " << order.quantity << ", Customer ID: " << order.customerID
             << ", Order Date: " << ctime(&order.orderDate);
    }

    set<string> categories;
    for (const auto &product : products) {
        categories.insert(product.category);
    }

    // Print categories
    cout << "\nCategories:\n";
    for (const auto &category : categories) {
        cout << category << endl;
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    // Print product stock
    cout << "\nProduct Stock:\n";
    for (const auto &stock : productStock) {
        cout << "Product ID: " << stock.first << ", Stock: " << stock.second << endl;
    }

    multimap<string, Order> customerOrders;
    for (const auto &order : orderHistory) {
        customerOrders.insert({order.customerID, order});
    }

    // Print customer orders
    cout << "\nCustomer Orders:\n";
    for (const auto &entry : customerOrders) {
        cout << "Customer ID: " << entry.first << ", Order ID: " << entry.second.orderID
             << ", Product ID: " << entry.second.ProductID << endl;
   
    }

}