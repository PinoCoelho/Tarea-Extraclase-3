#include <iostream>
#include <string>
#include <cstdint> // Necesario para 'uint32_t'
#include <bitset>  // Necesario para 'std::bitset'

// Valor del polinomio generador CRC (personalizado)
const uint32_t custom_crc_polynomial = 0b1101; // Polinomio: x^3 + x^2 + 1

// Función para calcular el CRC personalizado de una cadena de bits
uint32_t calculateCustomCRC(const std::string& data) {
    uint32_t crc = 0; // Valor inicial del registro CRC

    for (char ch : data) {
        crc ^= (static_cast<uint32_t>(ch) << 3); // XOR con el byte y desplazamiento
        if (crc & 0x8) {
            crc = (crc << 1) ^ custom_crc_polynomial; // Realizar la división polinómica
        } else {
            crc <<= 1; // No se produce división
        }
    }

    return crc;
}

uint32_t calculateCustomCRC2(const std::string& data) {
    //std::string data = "1101010"; // Datos de ejemplo
    uint32_t crc = calculateCustomCRC(data);

    std::cout << "Datos originales: " << data << std::endl;
    std::cout << "Valor CRC personalizado: " << std::bitset<4>(crc) << std::endl;

    return 0;
}
