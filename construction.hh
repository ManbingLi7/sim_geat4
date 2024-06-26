#ifndef CONSTRUCTION_HH
#define CONSTRUCTION_HH
#include "G4SystemOfUnits.hh"

#include "G4Box.hh"
#include "G4NistManager.hh"
#include "G4VPhysicalVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4VUserDetectorConstruction.hh"
#include "G4Material.hh"

class MyDetectorConstruction : public G4VUserDetectorConstruction
{
public:
  //constructor
  MyDetectorConstruction();
  //distructor
  ~MyDetectorConstruction();

  //it is defined in class G4UserDetectorConstruction so it has to be virtual?
  virtual G4VPhysicalVolume *Construct();
};



#endif
