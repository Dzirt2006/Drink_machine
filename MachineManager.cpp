//
// Created by dzirt on 7/15/2019.
//

#include "MachineManager.h"


//vector ini

void MachineManager::FillUpVect(vector<BrewInfo>){

    brewini.push_back(BrewInfo());
    brewini[0].DrinkName="Cola"; //set variable through the pointer of arr(_*(*BrewArr).Drinkname_) to string pointer
    brewini[0].Cost=1.25;
    brewini[0].Number=20;

    brewini.push_back(BrewInfo());
    brewini[1].DrinkName="pepsi";
    brewini[1].Cost=1.15;
    brewini[1].Number=17;

    brewini.push_back(BrewInfo());
    brewini[2].DrinkName="Aloe";
    brewini[2].Cost=2.00;
    brewini[2].Number=15;
}

/***Block of Public Methods***/

int MachineManager :: displayChoices(vector<BrewInfo>)// (which displays a menu of drink names and prices)
{

    FillUpVect(vector<BrewInfo>);//fix up
    int  choice;
cout<<"|1."<<brewini[0].DrinkName<<" |2."<<brewini[1].DrinkName<<" |3."<<brewini[2].DrinkName<<" |"<<endl;
cin>>choice;
if(!choice || choice==0) {
    system("slc");
    //displayChoices();
}else return choice;
}



void MachineManager :: drinkSales()// (which handles a sale)
{
inputMoney(); //passing it the patron's drink choice.
}


/***Block of Private Methods***/


double MachineManager :: inputMoney()
{
return 0;
}

int MachineManager ::dailyReport()
{
return 0;
}