#include <iostream>

using namespace std;

int main()
{
    cout << "Data types:\n -Boolean\n \nbool: size - 1 byte, range - true (1) to false (0)\n";

    bool Live = true;
    bool Death = false;
    cout << "example:\n \nLive is " << Live << endl << "Death is " << Death << "\n \n"; 
    char R {82};
    char E {69};
    char D {68};
    cout << "-Character\n \nchar: size - 1 byte; range - -128 to 127, or 0 to 255.\n \nexample:\n \nRose is " << R << E << D << endl << endl << "R - E + D = " << R - E + D << endl << endl << "wchar_t: size - (Windows) 2 byte, (Linux) - 4 byte; range - 0 to 65535 (2 byte), 0 to 4294967295 (4 byte);\n \nchar8_t - size - 1 byte; range - 0 to 256;\n \nchar16_t - size - 2 byte; range - 0 to 65535;\n \nchar32_t - size - 4 byte; range - 0 to 4294967295;\n \n" ;
    int a=16;
    short int b=6;
    long int c= -27;
    long long int d= 674;
    unsigned short int e=14;
    unsigned int f=39;
    unsigned long int g=678;
    unsigned long long int h=123456;
    cout <<  "int - size - 4 byte; range - -2147483648 to 2147483648;\n \nunsigned int - size - 4 byte; range - 0 to 4294967295;\n \nshort int - size - 2 byte; range - -32768 to 32767;\n \nunsigned short int - size - 2 byte; range - 0 to 65535;\n \nlong int - size - 8 byte; range -  -9223372036854775808 to 9223372036854775807;\n \nunsigned long int -  size - 8 byte; range - 0 to 18446744073709551615;\n \nlong long int -  size - 8 byte; range - -9223372036854775808 to 9223372036854775807;\n \nunsigned  long long int - size - 8 byte; range - 0 to 18446744073709551615;\n \n";
    cout << "example:\n \n16 - 6 = " << a-b << "\n \n-27 + 674 = " << c + d << "\n \n39 / 14 = " << f / e << "\n \n678 * 123456 = " << g * h;
    float a1{3.56f};
    double b1{3E2};
    long double c1{3.4e-2};
    cout << "-Floating point\n \nfloat - size - 4 byte; range - +/- 3.4E-38 to 3.4E+38;\n \ndouble - size - 8 byte; range - +/- 1.7E-308 to 1.7E+308;\n \nlong double - size - 8 byte; range - +/- 1.7E-308 to 1.7E+308\n \n";
    cout << "example:\n \n300 - 3.56 = " << b1 - a1 << "\n \n0.034 + 3.56 = " << c1 + a1;
    cout << "\n \n \n \nMore examples:\n \n16 - 3.56 = " << a - a1 << "\n \nR + 0.034 - 39 = " << R + c1 - f;



    return 0;
}
