#include "splashkit.h"
#define STRO 0.33

int read_int(string prompt) {
    write(prompt);
    return convert_to_integer(read_line());
}

string collect_string (string prompt) {
    write(prompt);
    return read_line();
}

void output_person(string name, int age) {
    write_line(name);
    write("Age is: ");
    write_line(age);
}

double output_air_speed(int frequency, int amp) {
    double airspeedcalc;
    airspeedcalc = frequency * amp * 0.01 / STRO;

    return airspeedcalc;
}