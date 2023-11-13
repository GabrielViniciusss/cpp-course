#include <iostream>

int main()
{
    constexpr int value = 32;

    int L{10};
    std::cout<<--L<<"\n";
  
    std::cout<<"hello world!\n";
    int x = 5;
    int y = 10;
    std::cout<<x<<"\n"<<y<<"\n";
    
    int k = 7.8;
    std::cout<<k;

    double h = 7.89;
    std::cout<<"\n"<<h;

    char l = 'k';
    std::cout<<"\n"<<l<<"\n";

    bool v = true;
    if(v)
        std::cout<<"hahahahah\n";

    std::string name = "Biel el cabalo louco";
    std::cout<<name<<"\n";
    
    return 0;
}
