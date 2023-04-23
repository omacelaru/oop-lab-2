//
// Created by macelaru on 07.04.2023.
//
#include "ContBancar.h"
#include "ContBancarPremium.h"
#include "ContBancarTineret.h"

#include "Meniu.h"
#include "InputInvalidSold.h"

#include <fstream>
#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

vector<shared_ptr<ContBancar>> Meniu::citireDate() {
    vector<shared_ptr<ContBancar>> conturi;
    ifstream f("../input.in");
    float pin;
    float sold;
    string nume, IBAN, tipCont;
    while (!f.eof()) {
        getline(f, tipCont);
        f >> pin;
        f.get();
        f >> sold;
        f.get();
        getline(f, nume);
        getline(f, IBAN);
        f.get();

        if (sold < 0) {
            sold = 0;
            throw InputInvalidSold();
        }

        if (tipCont == "1") { // tineret
            conturi.push_back(make_shared<ContBancarTineret>(nume, IBAN, tipCont, pin, sold));
        } else if (tipCont == "2") { //premium
            conturi.push_back(make_shared<ContBancarPremium>(nume, IBAN, tipCont, pin, sold));
        } else { // simplu
            conturi.emplace_back(make_shared<ContBancar>(nume, IBAN, tipCont, pin, sold));
        }
    }
    f.close();
    return conturi;
}

void Meniu::printConturi(const std::vector<shared_ptr<ContBancar>> &conturi) const {
    int i = 1;
    for (auto c: conturi)
        cout << i++ << ". " << *c << endl;
    cout << endl;
}

void Meniu::printMeniu() const {
    cout << "1. Depune\n";
    cout << "2. Retrage\n";
    cout << "3. Verifica Sold\n";
    cout << "4. Verifica tip cont\n";
    cout << "5. Iesire\n\n";
}
