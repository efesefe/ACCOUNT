//
// Created by user on 23.12.2020.
//

#ifndef ACCOUNT_H_STUFF_H
#define ACCOUNT_H_STUFF_H


class Stuff
{
private:
    double transportation;
    double food;
    double insurance;
public:
    Stuff()
    {
        transportation = 0.0;
        food = 0.0;
        insurance = 0.0;
    }
    void setTransportation(double s_transportation)
    {
        transportation = s_transportation;
    }
    void setFood(double s_food)
    {
        food = s_food;
    }
    void setInsurance(double s_insurance)
    {
        insurance = s_insurance;
    }
    double getTransportation(){return transportation;}
    double getFood(){return food;}
    double getInsurance(){return insurance;}
};


#endif //ACCOUNT_H_STUFF_H
