#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <Student.pb.h>

using namespace std;
using namespace jl;

int main() {
    jl::Student student;
    student.set_id(12);
    student.set_name("asdga");
    student.set_age(25);

    std::string output;
    student.SerializeToString(&output);
    student.set_age(31);

    jl:Student student1;
    student1.ParseFromString(output);
    std::cout << student1<<endl;

    return 0;
}