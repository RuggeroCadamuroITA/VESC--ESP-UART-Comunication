#include <iostream>
#include <limits>
#include <iomanip>

const double TENSIONE_MINIMA = 60.0;
const double TENSIONE_MASSIMA = 84.5;

int main() {
    double tensioneInput;
    double rangeTensione = TENSIONE_MASSIMA - TENSIONE_MINIMA;

    if (rangeTensione <= 0) {
        std::cerr << "Errore: Tensione minima e massima non definiscono un range valido." << std::endl;
        return 1;
    }

    std::cout << "--- Calcolatore Percentuale Batteria ---" << std::endl;
    std::cout << "Tensione Minima (0%): " << TENSIONE_MINIMA << "V" << std::endl;
    std::cout << "Tensione Massima (100%): " << TENSIONE_MASSIMA << "V" << std::endl;
    std::cout << "--------------------------------------" << std::endl;

    while (true) {
        std::cout << "Inserisci il voltaggio attuale della batteria (V) (o un non-numero per uscire): ";

        if (!(std::cin >> tensioneInput)) {
             std::cout << "Input non numerico rilevato. Uscita dal programma." << std::endl;
             std::cin.clear();
             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
             break;
        }

        if (tensioneInput < TENSIONE_MINIMA) {
             std::cout << "La percentuale stimata della batteria è: "
                       << std::fixed << std::setprecision(1) << 0.0 << "%"
                       << " (Tensione sotto il minimo)" << std::endl;
        } else if (tensioneInput <= TENSIONE_MASSIMA) {
             double tensioneRelativa = tensioneInput - TENSIONE_MINIMA;
             double percentuale = (tensioneRelativa / rangeTensione) * 100.0;
             std::cout << "La percentuale stimata della batteria è: "
                       << std::fixed << std::setprecision(1) << percentuale << "%"
                       << std::endl;
        } else { // tensioneInput > TENSIONE_MASSIMA
             double tensioneRelativa = tensioneInput - TENSIONE_MINIMA;
             double percentualeVirtuale = (tensioneRelativa / rangeTensione) * 100.0;
             double superamentoPercentuale = percentualeVirtuale - 100.0;

             std::cout << "La percentuale stimata della batteria è: 100% + "
                       << std::fixed << std::setprecision(1) << superamentoPercentuale << "%"
                       << " (Tensione sopra il massimo)" << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
