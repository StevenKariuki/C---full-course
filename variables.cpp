#include <iostream>
#include <string>

int main(){
    
    int x ; // declaration
    int y ;

    y = 10;
    x = 5; //assignment

    int sum = x + y;
    
    std::cout <<"The sum is " << sum << std::endl;

    int age ;
    std::string name;
    name = "steven";
    age = 25;
    
    std ::cout << "My name is "<< name << " and I am "<< age << " years old "<<std::endl;

    //single character
    char grade = 'A';
    char intial = 'S';
    char currency = '$';

    std::cout << "My grade is " << grade << std::endl;

    //floating point numbers
    float pi = 3.14;
    double pi2 = 3.14159;
    double length = 10.5;

    std::cout << "The value of pi is " << pi << std::endl;

    //boolean
    bool is_true = true;
    bool is_false = false;
    bool power = true;

    std::cout << "The value of is_true is " << is_true << std::endl;

    //strings
    std::string my_name = "Steven";
    std::string my_address = "123 Main St, New York, NY";

    std::cout << "My name is " << my_name << std::endl;

    return 0;
}