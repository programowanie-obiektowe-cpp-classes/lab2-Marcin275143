#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
 
    ResourceManager() {};

    ~ResourceManager() { delete obiekt; }

    ResourceManager(const ResourceManager& RM) { delete obiekt; *(RM.obiekt) = Resource(); *(RM.obiekt) = *obiekt; }

    ResourceManager& operator=(const ResourceManager& R) { if (&R != this) { delete obiekt;  *(R.obiekt) = Resource(); *(R.obiekt) = *obiekt; return *this; } }

    ResourceManager(ResourceManager&& RP) { obiekt = RP.obiekt; RP.obiekt = nullptr; }

    Resource* obiekt;

    double get() { return obiekt->get(); }
 
};
