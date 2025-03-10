#ifndef PHYSICS_HH
#define PHYSICS_HH

#include "G4VModularPhysicsList.hh"
#include "G4EmStandardPhysics.hh"
#include "G4MuonMinus.hh"
#include "G4MuonPlus.hh"
#include "G4MuonDecayChannelWithSpin.hh"
#include "G4MuonMinusCapture.hh"



class MyPhysicsList : public  G4VModularPhysicsList

{
public:
MyPhysicsList();
~MyPhysicsList();
};

#endif
