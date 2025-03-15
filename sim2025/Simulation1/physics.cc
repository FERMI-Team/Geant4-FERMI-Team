#include "physics.hh"

MyPhysicsList::MyPhysicsList()
{
RegisterPhysics (new G4EmStandardPhysics());
RegisterPhysics (new G4MuonMinus());
RegisterPhysics (new G4MuonPlus());
RegisterPhysics (new G4MuonDecayChannelWithSpin());
RegisterPhysics (new G4MuonMinusCapture());

RegisterPhysics (new G4MuonMinusBoundDecay());
RegisterPhysics (new G4MuBetheBlochModel());
RegisterPhysics (new G4MuBremsstrahlungModel());
RegisterPhysics (new G4MuonicAtomDecay());
RegisterPhysics (new G4MuonicAtomDecayPhysics());
RegisterPhysics (new G4MuonicAtomHelper());
RegisterPhysics (new G4MuonMinusAtomicCapture());
}

MyPhysicsList::~MyPhysicsList()
{}
