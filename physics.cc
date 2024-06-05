#include "physics.hh"

MyPhysicsList::MyPhysicsList()
{

  //Two interactions: Em(Electron magentic interaction)
  RegisterPhysics (new G4EmStandardPhysics());
  RegisterPhysics (new G4OpticalPhysics());
 
}

MyPhysicsList::~MyPhysicsList()
{}
