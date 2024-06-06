#include "physics.hh"

MyPhysicsList::MyPhysicsList()
{

  //Two interactions: Em(Electron magentic interaction)
  G4VPhysicsConstructor* emPhysics = new G4EmStandardPhysics();
  RegisterPhysics (emPhysics);
  G4VPhysicsConstructor* opticalPhysics = new G4OpticalPhysics();
  RegisterPhysics (opticalPhysics);
 
}

MyPhysicsList::~MyPhysicsList()
{}
