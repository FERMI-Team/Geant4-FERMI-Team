#ifndef CONSTRUCTION_HH
#define CONSTRUCTION_HH

#include "G4SystemOfUnits.hh"
#include "G4VUserDetectorConstruction.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4Box.hh"
#include "G4PVPlacement.hh"
#include "G4NistManager.hh"
#include "detector.hh"
#include "G4Sphere.hh"


class MyDetectorConstruction : public G4VUserDetectorConstruction
{
public:
MyDetectorConstruction();
//-MyDetectorConstruction();

virtual G4VPhysicalVolume *Construct();

private:
G4LogicalVolume *logicDetector;
virtual void ConstructSDandField();
};
#endif
