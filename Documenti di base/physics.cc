#include "physics.hh"

MyPhysicsList::MyPhysicsList()
{
RegisterPhysics (new G4EmStandardPhysics());
RegisterPhysics (new G4MuonMinus());
RegisterPhysics (new G4MuonPlus());
RegisterPhysics (new G4MuonDecayChannelWithSpin());
RegisterPhysics (new G4MuonMinusCapture());
}

MyPhysicsList::~MyPhysicsList()
{}
