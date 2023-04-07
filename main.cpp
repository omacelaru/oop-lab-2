#include "ContBancar.h"
#include "ContBancarPremium.h"
#include "ContBancarTineret.h"
#include "TRANZACTIE.h"
#include "RETRAGERE.h"
#include "DEPUNERE.h"
#include "VerificareSold.h"
#include "Meniu.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <memory>

using namespace std;

enum class TIPCONT{
    simplu = 0, tineret = 1, premium = 2
};

int main() {
    Meniu Meniu;
    vector<shared_ptr<ContBancar>> conturi = Meniu.citireDate();
    bool isRunning = true;
    ifstream f("../tastatura.txt");
    ifstream g("../conturi.txt");

    while (!g.eof()) {
        // afisare si alegerea contului unde se fac operatiuni
        Meniu.printConturi(conturi);
        int decizieCont;
        g >> decizieCont;
        decizieCont--;
        cout << "Contul ales este:\nNume: " << conturi[decizieCont]->getNume() << "\nIBAN: "
             << conturi[decizieCont]->getIban() << endl;
        isRunning = true;
        // alegerea operatiunilor
        while (isRunning){
            int decizie;
            Meniu.printMeniu();
            f >> decizie;
            switch (decizie) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:{
                    //funcții virtuale (pure) apelate prin pointeri de clasa bază
                    conturi[decizieCont]->tipCONT();

                    //dynamic cast
                    auto contPremium = dynamic_pointer_cast<ContBancarPremium> (conturi[decizieCont]);
                    if (contPremium)
                        contPremium -> tipCONT();
                    else{
                        auto contTineret = dynamic_pointer_cast<ContBancarTineret> (conturi[decizieCont]);
                        if(contTineret)
                            contTineret-> tipCONT();
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
        }
    }
    return 0;
}
