#include <iostream>

using namespace std;

class BankBlass{
public:
float rateOfInterest;

virtual float IntrestRate(){
    cout << "Following Banks are subclasses and are ovverriding this very method to display different values, showcasing Polymorpism and Inheritance" << endl;
    return rateOfInterest;
}
};

class SBI : public BankBlass{
    public:
    SBI(){
        rateOfInterest = 8.0f;
    }

    float IntrestRate() override{
        cout << "Interest rate of SBI: " << rateOfInterest << "%" << endl;
        return rateOfInterest;
    }
};

class ICICI : public BankBlass{
    public:
    ICICI(){
        rateOfInterest = 7.0f;
    }
    float IntrestRate() override{
        cout << "Interest rate of ICICI: " << rateOfInterest << "%" << endl;
        return rateOfInterest;
    }

};

class AXIS : public BankBlass{
    public:
    AXIS(){
        rateOfInterest = 9.0f;
    }
    float IntrestRate() override{
        cout << "Interest rate of AXIS: " << rateOfInterest << "%" << endl;
        return rateOfInterest;
    }

};