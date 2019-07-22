//
// Created by dzirt on 7/15/2019.
//

#ifndef DRINK_MACHINE_SIMULATOR_MACHINEMANAGER_H
#define DRINK_MACHINE_SIMULATOR_MACHINEMANAGER_H
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct BrewInfo{
    string DrinkName;
    double Cost;
    int Number;
};


class MachineManager {


    //BrewInfo* arr=(BrewInfo*)calloc(Num_Drinks, sizeof(Num_Drinks));//dynamicly allocated array of sturct,mb not right


    vector<BrewInfo> brewini;







/*

MachineManager(){ //we can initialize the struct variables only trough the default Constructor!!! or cin...

    *BrewArr[0]->DrinkName="Cola"; //set variable through the pointer of arr(_*(*BrewArr).Drinkname_) to string pointer
    *BrewArr[0]->Cost=1.25;
    *BrewArr[0]->Number=20;

    *BrewArr[1]->DrinkName="pepsi";
    *BrewArr[1]->Cost=1.15;
    *BrewArr[1]->Number=17;

    *BrewArr[2]->DrinkName="Aloe";
    *BrewArr[2]->Cost=2.00;
    *BrewArr[2]->Number=15;
};
*/


public:
    int displayChoices(vector<BrewInfo>);
    void drinkSales();
/*
    ~MachineManager(){
    dailyReport();
    }
*/
private:
    void FillUpVect(vector<BrewInfo>);
    double inputMoney();
    int dailyReport();
};



#endif //DRINK_MACHINE_SIMULATOR_MACHINEMANAGER_H
