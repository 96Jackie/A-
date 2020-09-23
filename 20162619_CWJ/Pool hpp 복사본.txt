//
//  Pool.hpp
//  Waterpark
//
//  Created by JooChanwoo on 2020/09/21.
//

#ifndef Pool_hpp
#define Pool_hpp
#include <iostream>

#include <stdio.h>
using namespace std;

class Pool
{
private:
    int choice;
    int numRestRiding;
    bool MyTube;
    int cusHeight;
    int cusWeight;
    
    
public:
    void PoolChoice();
    int MinusRiding(int num);
    void LifeGuard(bool jacket);
    void ShowRidingResult();
    void HightWeight(int height,int weight);
    
    
};


#endif /* Pool_hpp */
