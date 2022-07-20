#include<iostream>
#include<iomanip>
float inputwins();
float inputloses();
float winrate(float , float );
int main()
{
   float wins,losses =0;
    wins = inputwins();
    losses = inputloses();
    std::cout<<"the winrate of the team is "<<winrate(wins,losses);
    return 0;
}



float inputwins(){
    float wins;
   std::cout<<"enter the wins";
   std::cin>>wins;
   return wins;
}

float inputloses(){
    float loses;
    std::cout<<"enter losses";
    std::cin>>loses;
    return loses;
}

float winrate(float wins, float losses ){
    float total =0;
    total = wins + losses;
    return (wins/total)*100;
    
}