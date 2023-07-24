#include "splashkit.h"

#define STRO 0.33

// output the person info
void output_person(string name, int age) {
    write_line(name);
    write("Age is: ");
    write_line(age);
}

// reads the string from the user and outputs the result as a int
int read_int(string prompt) {
    write(prompt);
    return convert_to_integer(read_line());
}

double output_air_speed(int frequency, int amp) {
    double airspeedcalc;
    airspeedcalc = frequency * amp * 0.01 / STRO;

    return airspeedcalc;
}

// reads the string from user
string collect_string (string prompt) {
    write(prompt);
    return read_line();
}

// main program starts, it collects data from user and then outputs result
int main() {
    // variable list
    string name;
    int age;
    string bird;
    string prompt;
    string bird_name;
    int frequency;
    int amp; 
    double air_speed;

    // obtain information re user then output
    prompt = "Please enter your name: ";
    name = collect_string(prompt);
    age = read_int("Please enter your age: ");
    delay(1000);
    write_line("You entered the following:");
    delay(1000);
    write_line("");
    output_person(name, age);
    delay(1000);

    // formatting and obtain information re bird
    write_line("");
    prompt = "Enter the name of the bird type: ";
    bird_name = collect_string(prompt);
    prompt = "Enter the frequency: ";
    frequency = read_int(prompt);
    prompt = "Enter the amplitude: ";
    amp = read_int(prompt);
    write_line("Please wait for your answer: ");
    delay(1000);
    air_speed = output_air_speed(frequency, amp);
    
    
    // returns the completed informatiom to the user
    write("Well ");
    write(name);
    write(", your bird's airspeed is: ");
    write_line(air_speed); 

    // end of program
    return 0;
}