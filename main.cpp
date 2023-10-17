#include <iostream>
#include "ParityChecking.cpp"  // Incluye la implementación de Parity Checking
#include "CyclicRedundancyCheck.cpp"  // Incluye la implementación de CRC
#include "LongitudinalRedundancyCheck.cpp"  // Incluye la implementación de LRC
#include "CheckSum.cpp"  // Incluye la implementación de Check Sum

int main() {
    // Ejecutar Parity Checking
    checkParity("1101010");

    // Ejecutar CRC
    calculateCustomCRC2("1101010");

    // Ejecutar LRC
    calculateLRC({1, 2, 3, 4, 5});

    // Ejecutar Check Sum
    calculateCheckSum({1, 2, 3, 4, 5});

    return 0;
}
