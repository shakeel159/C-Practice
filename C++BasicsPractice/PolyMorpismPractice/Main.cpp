#include <iostream>
#include <string>
#include <cmath>
#include "BankClass.cpp"

using namespace std;

int main(){
    BankBlass baseBank;
    SBI sbiBank;
    ICICI ICICIBank;
    AXIS AXISBANK;

    baseBank.IntrestRate();
    sbiBank.IntrestRate();
    ICICIBank.IntrestRate();
    AXISBANK.IntrestRate();

    return 0;
}

