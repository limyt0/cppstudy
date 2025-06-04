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
        void buy(int, float);
        void sell(int, float);
        void update(float);
        void show();
        Stock();
        Stock(string, int, float);
        ~Stock();
};
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
    name = "";
    shares = 0;
    share_val = 0;
    set_total();
}
Stock::Stock(string co, int n, float pr){
    name = co;
    shares = n;
    share_val = pr;
    set_total();
}
Stock::~Stock(){

}

int main() {
    cout << "생성자 이용\n";
    Stock temp = Stock("Panda", 100, 1000);

    cout << "디폴트 생성자 이용\n";
    Stock temp2;

    cout << "temp를 temp2엥 대입\n";
    temp2 = temp;

    cout << "temp temp2 출력\n";
    temp.show();
    temp2.show();

    cout << "생성자를 이용하여 temp 내용 재설정\n";
    temp = Stock("Coding", 200, 1000);

    cout << "재설정된 temp 출력\n";
    temp.show();

    return 0;
    
}