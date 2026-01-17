#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Customer {
public:
    virtual void update(const string& status) = 0;
};

class RegularCustomer : public Customer {
private:
    string name;
public:
    RegularCustomer(const string& name) : name(name) {}

    void update(const string& status) {
        cout << "Regular customer " << name << " received update: " << status << endl;
    }
};


class VIPCustomer : public Customer {
private:
    string name;
public:
    VIPCustomer(const string& name) : name(name) {}
    void update(const string& status) {
        cout << "VIP customer " << name << " received update: " << status << endl;
    };
};

class BusinessCustomer : public Customer {
private:
    string companyName;
public:
    BusinessCustomer(const string& companyName) : companyName(companyName) {}
    void update(const string& status) {
        cout << "Business customer " << companyName << " received update: " << status << endl;
    };
};


class DeliveryService {
private:
    vector<Customer*> customers;
    string currentStatus;
public:
    void addCustomer(Customer* customer) {
        customers.push_back(customer);
    }
    void removeCustomer(Customer* customer) {
        int index = -1;
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == customer) {
                index = i;
                break;
            }
        }
        customers.erase(customers.begin() + index);
    }
    void updateStatus(string status) {
        currentStatus = status;
        notifyCustomers();

    }
    void notifyCustomers() {
        for (auto customer : customers) {
            customer->update(currentStatus);
        }
    }
};

int main1226() {
    DeliveryService service;

    RegularCustomer* customer1 = new RegularCustomer("Alice");
    VIPCustomer* customer2 = new VIPCustomer("Bob");
    BusinessCustomer* customer3 = new BusinessCustomer("CompanyX");

    service.addCustomer(customer1);
    service.addCustomer(customer2);
    service.addCustomer(customer3);

    cout << "Updating status: 배송 준비 중" << endl;
    service.updateStatus("배송 준비 중");

    cout << "\nUpdating status: 배송 완료" << endl;
    service.updateStatus("배송 완료");

    delete customer1;
    delete customer2;
    delete customer3;

    return 0;
}