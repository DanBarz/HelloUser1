//the # means we are speaking with the preprocesser 
#ifndef PROGRAM_H // this is a header guard
#define PROGRAM_H

#include <string>
using std::string;


int read_int(string prompt);
string collect_string (string prompt);
void output_person(string name, int age);
double output_air_speed(int frequency, int amp);

#endif