#include <iostream>

struct SnackProfile{
    std::string name;
    std::string snack;
    int cost;
};

SnackProfile* createProfile(std::string name, std::string snack, int cost);
void printProfile(SnackProfile* snkProfile);

int main(){
    std::string name;
    std::string snack;
    int cost;

    SnackProfile* snkProfile;

    

    std::cout <<"What is your name?";
    std::cin >> name;
    std::cout << "what is your favorite snack?";
    std::cin >> snack;
    std::cout << "How much does your favorite snack cost?";
    std::cin >> cost;

    snkProfile = createProfile(name, snack, cost);

    printProfile(snkProfile);



}

SnackProfile* createProfile(std::string name, std::string snack, int cost){
    SnackProfile* snkProfile = new SnackProfile;

    snkProfile ->name = name;
    snkProfile ->snack = snack;
    snkProfile ->cost =cost;

    return snkProfile;

    
}

void printProfile(SnackProfile* snkProfile){

    std::cout << snkProfile -> name;
    std::cout << snkProfile -> snack;
    std::cout << snkProfile -> cost;
}