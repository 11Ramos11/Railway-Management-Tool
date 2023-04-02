/** @file Application.cpp
 *  @brief Contains the Application Class implementation.
 *  @author -
 *  @bug No known bugs.
 */

#include <iostream>
#include "Application.h"

void Application::start(){

    SourceReader().read(stations, railwayNetwork);



    /*
    for (int i = 25; i < 80; i++)
      std::cout << "Max Flow: " << basicServices.maxFlow(i,i / 2) << std::endl;
    */

   /*std::cout << "Districts:\n";
    for (std::string mun: basicServices.getMunicipalitiesOrDistricts(false,5)){
        std::cout << mun << std::endl;
    }*/

    /*for (auto pair: basicServices.optimalPairs()){
        std::cout << pair.first->getStation()->getName() << "," <<
                        pair.second->getStation()->getName() << std::endl;
    }*/

    std::cout << basicServices.max_trains_target(1);
}