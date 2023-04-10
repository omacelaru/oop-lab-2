#include "ContBancar.h"
#include "ContBancarPremium.h"
#include "ContBancarTineret.h"
#include "RETRAGERE.h"
#include "DEPUNERE.h"
#include "VerificareSold.h"
#include "Meniu.h"
#include "InputInvalidSold.h"
#include "InvalidPin.h"
#include "RetragereInvalida.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <memory>

using namespace std;

int main() {
    Meniu Meniu;
    try {
        vector<shared_ptr<ContBancar>> conturi = Meniu.citireDate();

    bool isRunning;
    ifstream f("../tastatura.txt");
    ifstream g("../conturi.txt");
    ifstream h("../pinuri.txt");

    while (!g.eof()) {
        // afisare si alegerea contului unde se fac operatiuni
        Meniu.printConturi(conturi);
        int decizieCont, id = 0;
        float suma, pin;
        //cin >> decizieCont;
        g >> decizieCont;
        decizieCont--;
        cout << "Contul ales este:\nNume: " << conturi[decizieCont]->getNume() << "\nIBAN: "
             << conturi[decizieCont]->getIban() << endl;
        isRunning = true;
        try {
            cout << "Introdu pin:\n";
            h >> pin;cout << "Pinul introdus a fost: "<< pin <<endl;
            if (conturi[decizieCont]->verificaPin(pin)) {
                // alegerea operatiunilor
                while (isRunning) {
                    int decizie;
                    Meniu.printMeniu();
                    //cin >> decizie;
                    f >> decizie;
                    switch (decizie) {
                        case 1: {
                            //cout << "Introdu suma depusa: ";
                            //cin >> suma;
                            cout << "Se efectueaza o depunere\n\n";
                            f >> suma;
                            DEPUNERE depunere(id, suma, pin, conturi[decizieCont]);
                            depunere.executa();
                            break;
                        }
                        case 2: {
                            //cout << "Introdu suma pe care vrei sa o retragi: ";
                            //cin >> suma;
                            cout << "Se efectueaza o retragere\n\n";
                            f >> suma;
                            RETRAGERE retragere(id, suma, pin, conturi[decizieCont]);
                            try{
                            retragere.executa();}
                            catch (RetragereInvalida& exp){
                                cout << "Error: " << exp.what() << endl;
                            }
                            break;
                        }
                        case 3: {
                            VerificareSold verificareSold(id, pin, conturi[decizieCont]);
                            verificareSold.executa();
                            break;
                        }
                        case 4: {
                            //funcții virtuale (pure) apelate prin pointeri de clasa bază
                            conturi[decizieCont]->tipCONT();

                            //dynamic cast
                            auto contPremium = dynamic_pointer_cast<ContBancarPremium>(conturi[decizieCont]);
                            if (contPremium)
                                contPremium->tipCONT();
                            else {
                                auto contTineret = dynamic_pointer_cast<ContBancarTineret>(conturi[decizieCont]);
                                if (contTineret)
                                    contTineret->tipCONT();
                                else
                                    cout << "Sunt un simplu cont\n";
                            }
                            break;
                        }
                        case 5:
                            isRunning = false;
                            cout << "Ati iesit din cont\n\n";
                            break;
                    }
                    id++;

                }

            }
        }
        catch (InvalidPin& ex){
            cout << "Error: " << ex.what() << endl;
        }
    }
    }
    catch (InputInvalidSold& e){
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
