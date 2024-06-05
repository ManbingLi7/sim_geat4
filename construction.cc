#include "construction.hh"
MyDetectorConstruction::MyDetectorConstruction()
{}

MyDetectorConstruction::~MyDetectorConstruction()
{}

G4VPhysicalVolume *MyDetectorConstruction::Construct()
{
  G4NistManager *nist = G4NistManager::Instance();
  G4Material *worldMat = nist->FindOrBuildMaterial("G4_AIR");

  //create a world, volume 
  //half of the legthen, default is mm, multiply with m, with G4SystemOfUnits
  G4Box *solidWorld = new G4Box("solidWorld", 0.5*m, 0.5*m, 0.5*m);

  //insert material to this volume
  G4LogicalVolume *logicWorld = new G4LogicalVolume(solidWorld, worldMat, "logicWorld");

  //create physical volume, rotation(0), center of the Geant4 coordiate, look up all variables meaning
  G4VPhysicalVolume *physWorld = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicWorld, "pyhsWorld", 0, false, 0, true);

  return physWorld;
  
}
