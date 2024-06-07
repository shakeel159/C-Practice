#include <iostream>
#include <string>

using namespace std;


class Bank{
    public:
    virtual float getRateOfInterest() const = 0;
    virtual ~Bank() {}  // Virtual destructor
};
class SBI : public Bank{
    private:
    float rate;
    public:
    SBI(float r) : rate(r) {}
    float getRateOfInterest() const override{
        return rate;
    }
};
class PNB : public Bank{
    private:
    float rate;
    public:
    PNB(float r) : rate(r){}
    float getRateOfInterest() const override{
        return rate;
    }
};
class testBank{
    public:

    void test(){
        PNB pnb(5.0);
        SBI sbi(7.0);

        cout << "SBI Interest Rate: " << sbi.getRateOfInterest() << "%" << endl;
        cout << "SBI Interest Rate: " << pnb.getRateOfInterest() << "%" << endl;
    }
};
int main(){
    testBank test_bank;

    test_bank.test();
    return 0;
}
