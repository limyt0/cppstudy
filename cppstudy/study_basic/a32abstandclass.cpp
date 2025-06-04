#include <iostream>

using namespace std;

class Stock
{
    private:
        string name;
        int shares;
        float share_val;
        double total_val;
        void set_total() { total_val = shares * share_val; }
    public:
        void acquire(string, int, float);
        void buy(int, float);
        void sell(int, float);
        void update(float);
        void show();
        Stock();
        ~Stock();
};
void Stock::acquire(string co, int n, float pr){
    name = co;
    shares = n;
    share_val = pr;
    set_total();
}
void Stock::buy(int n, float pr){
    shares += n;
    share_val = pr;
    set_total();
}
void Stock::sell(int n, float pr){
    shares -= n;
    share_val = pr;
    set_total();
}
void Stock::update(float pr){
    share_val = pr;
    set_total();
}
void Stock::show(){
    cout << "회사: " << name << endl;
    cout << "주식 수" << shares << endl;
    cout << "주가: " << share_val << endl;
    cout << "주식 총가치: " << total_val << endl;
}

Stock::Stock(){

}
Stock::~Stock(){

}

int main() {
    Stock temp;

    temp.acquire("Panda", 100, 1000);
    temp.show();
    temp.buy(10, 1200);
    temp.show();
    temp.sell(5, 800);
    temp.show();

    return 0;
    
}