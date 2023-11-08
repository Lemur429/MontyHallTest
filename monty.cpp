#include <iostream>
#include <random>
int main()
{
    std::cout<<"testing monty hall game show"<<std::endl;
    srand(time(NULL));
    uint32_t test_runs=50000;
    uint32_t success=0;
    int r_door;
    int guess;
    for(uint32_t i=0; i<test_runs;i++)
    {
        r_door=(rand()%3)+1;
        guess=(rand()%3)+1;

        int temp=(rand()%2)+1;
        
        if(temp==guess)
            temp++;
        if(temp!=r_door)
            if(guess!=r_door)
                temp=(1+2+3)-guess-temp;
        std::cout<< "\r"<<"Test Run:"<<i<<" Success chance:"<<(success/(double)i);
        guess=temp;
        if(guess==r_door)
            success++;

    }
    
    std::cout<<"\r"<<"Final result:  Runs:"<<test_runs<<" Success:"<<success<<" Success chance:"<<(double)(success/(double)test_runs)<<std::endl;
    
}




